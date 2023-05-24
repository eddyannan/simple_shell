#include "main.h"

/**
 * executeCommand - Execute a command in the shell
 * @command: The command to be executed
 */
void executeCommand(char *command)
{
	pid_t pid = fork();

	if (pid < 0)
	{
		_prints("Fork failed");
		exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			/* Child process */
			system(command);
			exit(EXIT_SUCCESS);
			}
			else
			{
				/* Parent process */
				wait(NULL);
				}
				}
