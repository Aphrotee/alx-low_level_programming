#include "function_pointers.h"

/**
 * int_index - returns index of integer that
 * makes cmp return 1
 * @array: array of integers to be tested
 * @size: size of array
 * @cmp: pointer to fuction to be executed
 *
 * Return: index of integer in array that makes cmp return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j, k;

	if ((array == NULL) || (cmp == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j == 1)
		{
			k = i;
			break;
		}
	}
	if (j != 1)
		k = -1;
	return (k);
}
