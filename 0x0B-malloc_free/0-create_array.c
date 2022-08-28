#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and array array and initializes it's first character
 * @size: size of the array
 * @c: character to be used as first character
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar, *d;
	unsigned int i;

	if (size == 0)
		d = NULL;
	else
	{
		ar = malloc(sizeof(char) * size);
		if (!ar)
			return (NULL);
		for (i = 0; i < size; i++)
			ar[i] = c;
		d = ar;
	}
	return (d);
}
