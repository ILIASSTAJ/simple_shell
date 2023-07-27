#include "shell.h"

/**
 * _puts - Prints a string to the standard output stream
 * @str: The string to print
 *
 * Return: Void
 */
void _puts(char *str)
{

	size_t lenght;
	ssize_t num_written;

	lenght = _strlen(str);
	num_written = write(STDOUT_FILENO, str, lenght);
	if (num_written == -1)
	{
		perror("write");
	}
}

/**
 * _puterror - Prints an error message to the standard error stream
 * @err: The error message to print
 *
 * Return: Void
 */
void _puterror(char *err)
{
	size_t lenght;
	ssize_t num_written;

	lenght = _strlen(err);
	num_written = write(STDERR_FILENO, err, lenght);
	if (num_written == -1)
	{
		perror("write");
	}
}
