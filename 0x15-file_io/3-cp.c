#include "main.h"

#define MAXSIZE 1024
#define SE STDERR_FILENO

/**
 * main - A program that couples the content of a file to another file
 * @ac: taking of the steps
 * @av: records
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int a, b, c, d;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	a = open(av[1], O_RDONLY);
	if (a == -1)
		dprintf(SE, "Error: can't read from file %s\n", av[1]), exit(98);

	b = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (b == -1)
		dprintf(SE, "Error: can't write to %s\n", av[2]), exit(99);
	do {
		c = read(a, buf, MAXSIZE);
		if (c == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		if (c > 0)
		{
			d = write(b, buf, (ssize_t) c);
			if (d == -1)
				dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (c > 0);

	c = close(a);
	if (c == -1)
		dprintf(SE, "Error: Can't close fd %d\n", a), exit(100);
	d = close(b);
	if (d == -1)
		dprintf(SE, "Error: Can't close fd %d\n", b), exit(100);

	return (0);
}
