#include "main.h"

/**
 * _isupper - check whether letter is uppercase
 * @c: number to be checked
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
