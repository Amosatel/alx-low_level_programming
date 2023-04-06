#include "main.h"

int actual_prime(int n, int t);

/**
 * is_prime_number - checks whether a number is prime or notg
 * @n: number to be checked
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if number if prime via recursion
 * @n: number to check
 * @t: iterator
 * Return: 1 if prime 0 if not
 */

int actual_prime(int n, int t)
{
	if (t == 1)
		return (1);
	if (n % t == 0 && t > 0)
		return (0);
	return (actual_prime(n, t - 1));
}
