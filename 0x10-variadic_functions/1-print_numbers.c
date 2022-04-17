#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints integer arguments from the third argument
 * @separator: character(s) to be used to separate integers
 * @n: number or arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
