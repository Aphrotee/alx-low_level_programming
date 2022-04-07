#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - works just like malloc
 * @b: amount of memory to be reserved
 *
 * Return: pointer of any type
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);
	else
		return (d);
}
