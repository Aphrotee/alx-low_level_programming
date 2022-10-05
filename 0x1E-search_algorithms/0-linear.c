#include "search_algos.h"

/**
 * linear_search - This is a function that searches for a value in
 * an array of integers using the Linear search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * print_array - prints a given array
 * @array: array to be printed
 * @start: printing starting point
 * @stop: stopping point for printing
 *
 * Return: nothing
 */
void print_array(int *array, int start, int stop)
{
	int i;

	if (array)
	{
		for (i = start; i < stop; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}
}
