#include "function_pointers.h"

/**
 * print_name - prints name that is passed in
 * @name: my name
 * @f: pointer to funtion giving format the name is to be printed
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
