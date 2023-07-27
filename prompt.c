#include "shell.h"

/**
 * prompt - Print shell prompt to stdin stream.
 * this function is returning nothing.
 *
 * Return: void.
 */

void prompt(void)
{

	_puts(PROMPT);
	fflush(stdout);
}
