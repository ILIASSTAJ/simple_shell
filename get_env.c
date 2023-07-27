#include "shell.h"

/**
 * _getenv - Get the value of an environment variable
 * @name: Name of the environment variable
 *
 * Return: Value of the environment variable, or NULL if it doesn't exist
 */
char *_getenv(const char *name)
{
	char **env;
	size_t name_lenght = _strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_lenght) == 0 && (*env)[name_lenght] == '=')
		{
			return (&(*env)[name_lenght + 1]);
		}
	}

	return (NULL);
}
