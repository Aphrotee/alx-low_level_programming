#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - This is a function that reallocates
 * a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously
 * allocated with a call to malloc.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: pointer to the new memory allocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem, *init;
	void *retp;
	int i;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		new_mem = malloc(new_size);
		if (!new_mem)
			return (NULL);
		retp = new_mem;
		return (retp);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_mem = malloc(new_size);
	if (!new_mem)
		return (NULL);
	retp = new_mem;
	init = ptr;
	for (i = 0; i < old_size; i++)
		new_mem[i] = init[i];
	free(ptr);
	return (retp);
}
