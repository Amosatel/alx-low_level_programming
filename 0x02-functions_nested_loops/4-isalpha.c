#include "main.h"

/**
 * _isalpha - prints alphabets both upper and lowercase to stdout
 *
 * @c: parameter to be printed to stdout
 *
 * Return: end of execution and exit program
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
