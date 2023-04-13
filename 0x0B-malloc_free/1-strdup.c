#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates space in memory
 * @str: pointer to char
 * Return: returns NULL or pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	ptr = malloc(sizeof(char) * (x + 1));

	if (ptr == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		ptr[y] = str[y];

	return (ptr);
}

