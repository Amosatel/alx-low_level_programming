#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: input to be searched
 * @accept: input
 * Return: will be zero
 */

char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
				return (s);
		}
		s++;
	}
	return ('\0');
}
