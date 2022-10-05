#include "search_algos.h"

/**
 * exponential_search - This is a function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where the value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	int a, n, z;
	size_t i;

	if (!array)
		return (-1);
	i = 1;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if ((i * 2) < size)
		{
			if ((array[i] < value) && (value < array[i * 2]))
			{
				n = i * 2;
				printf("Value found between indexes ");
				printf("[%ld] and [%d]\n", i, n);
				break;
			}
		}
		else
		{
			n = size - 1;
			printf("Value found between indexes ");
			printf("[%ld] and [%d]\n", i, n);
			break;
		}
		i *= 2;
	}
	a = i;
	z = n;
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
