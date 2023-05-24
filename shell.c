#include "main.h"

#define MAX_COMMAND_LENGTH 100

/**
 * _prints - Print a message to the standard output
 * @message: The message to be printed
 *
 * Return: None
 */
void _prints(char *message)
{
	printf("%s", message);
}

/**
 * displayPrompt - Display the shell prompt
 *
 * Return: None
 */
void displayPrompt(void)
{
	_prints("Shell$ ");
}

/**
 * readCommand - Read a command from the standard input
 *
 * Return: The command entered by the user
 */
char *readCommand(void)
{
	char *command = NULL;
	size_t bufsize = 0;

	if (getline(&command, &bufsize, stdin) == -1)
	{
		/* Handle end of file (Ctrl+D) */
		free(command);
		return (NULL);
	}

	return (command);
}

/**
 * _strcspn - Find the length of the initial segment of a string
 * @s: The string to be searched
 * @reject: The characters to reject
 *
 * Return: The length of the initial segment of s
 */
size_t _strcspn(const char *s, const char *reject)
{
	 const char *p, *r;

	for (p = s; *p != '\0'; p++)
	{
		for (r = reject; *r != '\0'; r++)
		{
			if (*p == *r)
			{
				return (p - s);
			}
		}
	}
	return (p - s);
}

/**
 * _strcmp - Compare two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		}

		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
