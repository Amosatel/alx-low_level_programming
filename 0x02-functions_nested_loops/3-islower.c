#include "main.h"

/**
 * _islower - prints lowercase character to stdout
 *
 * @c: parameter to be printed
 *
 * Return: marks the end of program
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
