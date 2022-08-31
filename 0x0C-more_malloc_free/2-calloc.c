#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This is a function that
 * allocates memory for an array using malloc.
 * @nmemb: The number of elements to be in the memory allocated.
 * @size: The size of the element to be in the memory.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_mem;
	void *pt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new_mem = malloc(nmemb * size);
	if (!new_mem)
		return (NULL);
	pt = new_mem;
	for (i = 0; i < (nmemb * size); i++)
		new_mem[i] = 0;
	return (pt);
}
