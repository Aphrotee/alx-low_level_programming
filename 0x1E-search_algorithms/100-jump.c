#include "search_algos.h"

/**
 * jump_search - This is a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, j, sq;

	if (!array)
		return (-1);
	sq = sqrt(size);
	for(a = 0; a < size; a += sq)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if ((a + sq) < size)
		{
			if (array[a] <= value && array[a + sq] >= value)
			{
				printf("Value found between");
				printf("indexes [%ld] and [%ld]\n", a, a + sq);
				break;
			}
		}
		else
		{
			printf("Value found between");
			printf("indexes [%ld] and [%ld]\n", a, a + sq);
		}
	}
	for (j = a; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
