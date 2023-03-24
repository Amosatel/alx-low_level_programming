#include "main.h"

/**
 * _isdigit - check if character is digit
 * @c: character to be checked
 * Return: 1 if character is digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
