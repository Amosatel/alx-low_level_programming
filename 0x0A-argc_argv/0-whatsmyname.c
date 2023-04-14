#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name even
 * when name is changed
 * @argc: no of arguments
 * @argv: array containing arguments
 *
 * Return: will be 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
