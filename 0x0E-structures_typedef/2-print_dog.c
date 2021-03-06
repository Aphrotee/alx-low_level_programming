#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints the details of the dog
 * @d: pointer to the struct holding the dog's deets
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %S\n", d->name);
		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %lf\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
