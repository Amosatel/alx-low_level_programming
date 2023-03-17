#include <stdio.h>

/**
 * main - entry point of a program
 *
 * Return: exit point of a program
 */

int main(void)
{
	printf("size of a char: %lu size byte(s)\n", sizeof(char));
	printf("size of a int: %lu size byte(s)\n", sizeof(int));
	printf("size of a long int: %lu size byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu size byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu size byte(s)\n", sizeof(float));
	return (0);
}
