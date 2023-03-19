#include <stdio.h>

/**
 * main - this the entry point for execution of the program
 *
 * Return: this is where the program terminates
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	for (x = 'A' ; x <= 'Z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
