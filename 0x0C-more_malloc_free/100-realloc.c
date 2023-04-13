#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates mem block via  malloc and free
 * @ptr: pointer previously allocated mem via malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *ol_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	ol_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = ol_ptr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = ol_ptr[x];
	}

	free(ptr);
	return (ptr1);
}


