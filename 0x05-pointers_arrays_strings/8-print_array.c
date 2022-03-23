#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array pointer
 * @n: index array to be printed up to
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *a);
		a++;
	}
	printf("%d\n", *a);
}
