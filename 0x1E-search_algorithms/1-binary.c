#include "search_algos.h"

/**
 * binary_search - This is a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int a = 0, z = size - 1, n;

	if (!array)
		return (-1);
	while (a <= z)
	{
		printf("Searching in array: ");
		print_array(array, a, z);
		n = (z - a) / 2;
		if (array[n + a] == value)
			return (n + a);
		else if (array[n + a] > value)
			z = (n + a) - 1;
		else if (array[(z - a) / 2] < value)
			a = (n + a) + 1;
	}
	return (-1);
}

/**
 * print_array - prints a given array
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
	return;
}
