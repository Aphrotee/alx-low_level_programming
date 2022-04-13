#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - duplicates the input into the output
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to duplicate struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d, *new = (dog_t *)malloc(sizeof(dog_t));

	d = new;
	if (new != NULL)
	{
		new->name = name;
		new->age = age;
		new->owner = owner;
	}
	else
	{
		free(new);
		d = NULL;
	}
	return (d);
}
