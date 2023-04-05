#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: integer to be powered
 * @y: power to raise by
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
