#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * @filename: The pointer
 * @letters: Handle the number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t countr, countw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	countr = read(file, buffer, letters);
	if (countr == -1)
		return (0);

	countw = write(STDOUT_FILENO, buffer, countr);
	if (countw == -1 || countr != countw)
		return (0);

	free(buffer);
	close(file);

	return (countw);
}
