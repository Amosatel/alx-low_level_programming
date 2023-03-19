#include <stdio.h>

/**
 * main - marks the entry point for program execution
 *
 * Return: marks the end of execution for the program
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');
	return (0);
}
