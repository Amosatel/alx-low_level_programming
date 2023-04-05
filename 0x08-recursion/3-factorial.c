#include "main.h"

/**
 * factorial - prints factorial of an int
 * @n: integer to find its factorial
 * Return: factorial of int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
