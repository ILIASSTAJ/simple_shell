#include "shell.h"

/**
 * shell_cd - changes the current working directory of the shell
 * @args: array of arguments
 */
void shell_cd(char **args)
{
	char *dir = args[1];
	int rett;

	/* If no argument is provided, change to HOME directory */
	if (dir == NULL)
	{
		dir = _getenv("HOME");
		if (dir == NULL)
		{
			_puts("cd: No HOME directory found\n");
			return;
		}
	}

	rett = chdir(dir);
	if (rett == -1)
	{
		perror("cd");
	}
}
