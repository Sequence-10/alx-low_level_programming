#include "main.h"

/**
 * append_text_to_file - A function that appends a text at the end of a file
 * @filename: holds the name of the file
 * @text_content: direct it to the end of the file
 *
 * Return: 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c;

	if (filename == NULL)
		return (-1);

	if (text_content  == NULL)
		return (1);

	a = open(filename, O_APPEND | O_WRONLY);

	if (a == -1)
		return (-1);

	for (c = 0; text_content[c] != '\0'; c++)
		;

	b = write(a, text_content, c);
	if (b == -1)
		return (-1);
	close(a);

	return (1);
}
