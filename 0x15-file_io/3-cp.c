#include "main.h"

void print_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - a function that copies the content of one file to another
 * @argc: control the process
 * @argv: serve as a backup
 * Return: 1 on success, exit otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, val_q = 1024, wrote, close_i, close_j;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	i = open(argv[1], O_RDONLY);
	print_IO_stat(i, -1, argv[1], '0');
	j = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	print_IO_stat(j, -1, argv[2], 'W');
	while (val_q == 1024)
	{
		val_q = read(i, buffer, sizeof(buffer));
		if (val_q == -1)
			print_IO_stat(-1, -1, argv[1], '0');
		wrote = write(j, buffer, val_q);
		if (wrote == -1)
			print_IO_stat(-1, -1, argv[2], 'W');
	}
	close_i = close(i);
	print_IO_stat(close_i, i, NULL, 'C');
	close_j = close(j);
	print_IO_stat(close_j, j, NULL, 'C');
	return (0);
}

/**
 * print_IO_stat - A function that checks if a file can be opened or closed
 * @stat: the  descriptor of the file
 * @filename: the name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 * Return: nothing
 */
void print_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == '0' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n, filename");
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", filename)
			exit(99);
	}
}
