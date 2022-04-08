#include "main.h"
#include <stdlib.h>

/**
 * _calloc - functions just like calloc
 * @nmemb: number of members intended
 * @size: size of each member
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *d, *arr;

	if (nmemb == 0 || size == 0)
		d = NULL;
	else
	{
		arr = malloc(nmemb * size);
		for (i = 0; i < nmemb; i++)
			arr[i] = 0;
		d = arr;
	}
	return (d);
}
