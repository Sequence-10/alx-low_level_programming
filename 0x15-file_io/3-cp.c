#include "main.h"
/**
 * program_not_closing - A function to take care of close errors
 * @code_source: take care of the source code
 * @code_destination: take care of the destination code
 * Return: void
 */

void program_not_closing(int code_source, int code_destination)
{
	int code;

	code = close(code_source);
	if (code == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				code_source);
		exit(100);
	}
	code = close(code_destination);
	if (code == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				code_destination);
		exit(100);
	}
}

/**
 * program_checking_for_errors - A function to check for errors
 * @code_source: take care of the source code
 * @code_destination: take care of the destination code
 * @argument_values: handle the arguments
 * Return: void
 */

void program_checking_for_errors(int code_source, int code_destination,
		char *argument_values[])
{
	if (code_source == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argument_values[1]);
		exit(98);
	}
	if (code_destination == FILE_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argument_values[2]);
		exit(99;
	}
}

/**
 * main - A program that copies the content of a file to another file.
 * @argument_count: dealing with the number of arguments.
 * @argument_values: dealing with the arguments array.
 * Return: 0 for sucess anything else is an error
 */

int main(int argument_count, char *argument_values[])
{
	int code_source, code_destination;
	char file_buffer[1024];
	ssize_t charac_recorded, charac_received;

	if (argument_count != 3)
	{
		dprintf(STDERR_FILENO, "%s\n",
				"Usage: cp file_from file_to");
		exit(97);
	}
	code_source = open(argument_values[1], O_RDONLY);
	code_destination = open(argument_values[2], O_CREAT | O_WRONLY
			| O_TRUNC | O_APPEND, 0664);
	error_handler(code_source, code_destination, argument_values);
	charac_recorded = 1024;
	while (charac_recorded == 1024)
	{
		charac_recorded = read(code_source,
				file_buffer, 1024);
		if (charac_recorded == FILE_ERROR)
			error_handler(FILE_ERROR, 0, argument_values);
		charac_received = write(code_destination,
				file_buffer, charac_recorded);
		if (charac_received == FILE_ERROR)
			error_handler(0, FILE_ERROR, argument_values);
	}
	close_handler(code_source, code_destination);
	return (0);
}
