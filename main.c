#include "shell.h"

int main(void)
{
        char *buffer;
	char *token;
	char **args;
        size_t buffer_size;
        int n_chars, status;
	pid_t my_pid;

        while(1)
        {

                write(1, "$ ", 2);
                n_chars = getline(&buffer, &buffer_size, stdin);
		args = malloc(sizeof(char *) * 1024);
		token = strtok(buffer, " \t\n");
		args[0] = token;
		my_pid = fork();
		if(my_pid == 0)
		{
			if(execve(args[0], args, NULL) == -1)
				perror("execve");
		}else{
			wait(&status);
		}
		free(args);
	}



	return 0;
}
