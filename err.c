#include "shell.h"

/**
 *_eputs1 - this prints an input string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void _eputs1(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar1(str[i]);
		i++;
	}
}

/**
 * _eputchar1 - this writes the character c to stderr
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _eputchar1(char s)
{
	static char buf[WRITE_BUF_SIZE];
	static int i;

	if (s == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (s != BUF_FLUSH)
		buf[i++] = s;
	return (1);
}

/**
 * _putfd - this writes the character c to given fd
 * @s: The character to print
 * @fd: The filedescriptor to write to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putfd(char s, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (s == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (s != BUF_FLUSH)
		buf[i++] = s;
	return (1);
}

/**
 *_putsfd - prints an input string
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 *
 * Return: the number of chars put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}

