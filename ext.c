#include "shell.h"

/**
 **_strncpy - this finds copies of a string
 *@dest: the destination string to be copied to
 *@src: the source string
 *@n: the amount of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int o, p;
	char *s = dest;

	o = 0;
	while (src[o] != '\0' && o < n - 1)
	{
		dest[o] = src[o];
		o++;
	}
	if (o < n)
	{
		p = o;
		while (p < n)
		{
			dest[p] = '\0';
			p++;
		}
	}
	return (s);
}

/**
 **_strncat - this concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int o, p;

	o = 0;
	p = 0;
	while (dest[o] != '\0')
		o++;
	while (src[p] != '\0' && p < n)
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	if (p < n)
		dest[o] = '\0';
	return (s);
}

/**
 **_strchr - finds a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

