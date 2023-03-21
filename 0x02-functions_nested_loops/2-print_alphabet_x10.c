#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * _putchar: prints a character to the stdout
 *
 * Return: marks the end of execution
 */

void print_alphabet_x10(void)
{
	char i;
	int z;

	for (z = 0 ; z < 10 ; z++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}

