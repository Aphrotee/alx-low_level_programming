#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  frees memory allocated to duplicate the struct dog_t
 * @d: memory to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
