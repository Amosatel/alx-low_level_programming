#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes
 * Return: copied memory after bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y;

	x = 0;
	y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

