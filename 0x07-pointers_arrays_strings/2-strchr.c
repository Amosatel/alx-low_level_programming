#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: string to be searched for
 * Return: pointer if c found or null if not
 */

char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
