#include "main.h"

/**
 * print_alphabet - marks entry point of program
 * _putchar: prints a character to stdout
 * Return: time to exit the program
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
