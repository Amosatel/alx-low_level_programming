#include <stdio.h>

/**
 * main - marks the entry point for execution
 *
 * Return: marks the end of execution and exits the program
 */

int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
