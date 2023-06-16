#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *op;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	op = ptr;

	if (new_size < old_size)
	{
		i = -1;
		while (++i < new_size)
			p1[i] = op[i];
	}

	if (new_size > old_size)
	{
		i = -1
		while (++i < old_size)
			p1[i] = op[i];
	}

	free(ptr);
	return (p1);
}