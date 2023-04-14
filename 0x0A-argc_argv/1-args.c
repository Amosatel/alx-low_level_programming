#include "main.h"
#include <stdio.h>

/**
 * main - prints no. of arguments in program
 * @argc: no. of arguments
 * @argv: array of arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

