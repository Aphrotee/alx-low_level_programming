#include "function_pointers.h"

/**
 * array_iterator - performs the function pointed by
 * action on the array elemnts
 * @array: array containing the elments to be worked on
 * @size: size of array
 * @action: pointer to function to be performed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if ((action == NULL) || (array == NULL))
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
