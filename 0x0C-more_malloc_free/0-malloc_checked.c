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
	void *p, *d;

	d = malloc(b);
	if (d = NULL)
		p = 98;
	else
		p = d;
	return (p);
}
