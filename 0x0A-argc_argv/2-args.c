#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments as it receives
 * @argc: no. of arguments received
 * @argv: array of arguments
 *
 * Return: wil be 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
