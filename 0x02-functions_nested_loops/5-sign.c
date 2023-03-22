#include "main.h"

/**
 * print_sign - prints the sign of an integer or character
 *
 * @n: parameter to be printed to stdout
 *
 * Return: returns a value depending on the sign on the character
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
