#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: address to star filling
 * @b: new value
 * @n: bytes to be changed
 * Return: new array with adjusted values
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	x = 0;
	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
