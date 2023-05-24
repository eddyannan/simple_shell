#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */

int main()
{
	char *command;

	while (1)
	{
		displayPrompt();
		command = readCommand();

		if (command == NULL)
		{
			/* Exit the shell when command is NULL (Ctrl + D) */
			_prints("Exiting the shell...\n");
			break;
			}
			/* Remove newline character from the command */
			command[strcspn(command, "\n")] = '\0';

			if (strcmp(command, "exit") == 0)
			{
				/* Exit the shell if the command is "exit" */
				_prints("Exiting the shell...\n");
				break;
				}
				executeCommand(command);

				free(command);
				command = NULL;
				}
				return (0);
				}
