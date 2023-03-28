#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer whose value is to be swapped
 * @b: ineger to be swapped
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b =  m;
}
