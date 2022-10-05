#include "search_algos.h"

/**
 * interpolation_search - This is a function that searches
 * for a value in a sorted
 * array of integers using the interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array)
		return (-1);
	while ((array[low] != array[high]) && (value >= array[low]))
	{
		pos = low + (((double)(high - low)
				/ (array[high] - array[low]))
			* (value - array[low]));
		printf("Value checked array");
		if (pos < size)
			printf("[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("[%ld] is out of range\n", pos);
			break;
		}
		if (value == array[pos])
			return (pos);
		if (value > array[pos])
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
	}
	return (-1);
}
