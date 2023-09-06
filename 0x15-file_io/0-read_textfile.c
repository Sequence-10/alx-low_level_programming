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
	int file_text;
	ssize_t rcounter, wcounter;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_text = open(filename, O_RDWR);
	if (file_text == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(file_text, buffer, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);
	close(file_text);

	return (wcount);
}
