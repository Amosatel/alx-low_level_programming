#include "main.h"

int actual_sqrt_recursion(int n, int t);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to calculate square root of
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to get natural s.root
 * @n: integer to find s.rooot of
 * @t: iterator
 * Return: actual square root
 */

int actual_sqrt_recursion(int n, int t)
{
	if (t * t > n)
		return (-1);
	if (t * t == n)
		return (t);
	return (actual_sqrt_recursion(n, t + 1));
}

