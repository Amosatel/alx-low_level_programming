#include <stdio.h>

/**
 * main - entry point of a program
 *
 * Return: exit point of a program
 */

int main(void)
{
	printf("size of a char: %lu size byte(s)", sizeof(char));
	printf("size of a int: %lu size byte(s)", sizeof(int));
	printf("size of a long int: %lu size byte(s)", sizeof(long int));
	printf("size of a long long int: %lu size byte(s)", sizeof(long long int));
	printf("size of a float: %lu size byte(s)", sizeof(float));
	return (0);
}
