#include "search_algos.h"

/**
 * advanced_binary_2 - This is a function that searches
 * for the first occurrence of a value in
 * a sorted array of integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * @a: is the lowest index of array
 * @z: is the highest index of array
 *
 * Return: index where the value is located
 */
int advanced_binary_2(int *array, size_t size, int value, int a, int z)
{
	int n, test;

	if (!array)
		return (-1);
	if (a == z && value <= array[size - 1])
		return (-1);
	printf("Searching in array: ");
	print_array(array, a, z);
	if (a == z)
		return (-1);
	n = (z - a) / 2;
	if (array[n + a] == value)
	{
		test = advanced_binary_2(array, size, value, a, n + a);
		if (test == -1)
			return (n + a);
		else
			return (test);
	}
	else if (array[n + a] > value)
		z = n + a;
	else if (array[(z - a) / 2] < value)
		a = (n + a) + 1;
	return (advanced_binary_2(array, size, value, a, z));
}

/**
 * advanced_binary - This is a function that searches
 * for the first occurrence of a value in
 * a sorted array of integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where the value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int n;

	if (!array)
		return (-1);
	n = advanced_binary_2(array, size, value, 0, size - 1);
	return (n);
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
