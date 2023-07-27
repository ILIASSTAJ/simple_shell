#include "shell.h"

/**
 * shell_env - Prints all the environment variables.
 * this comments are not enought.
 * Return 1..
 * Return:  void.
 */

int shell_env(void)
{
	int i;
	/*this func is not returning void*/

	for (i = 0; environ[i]; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}



	return (0);
}
