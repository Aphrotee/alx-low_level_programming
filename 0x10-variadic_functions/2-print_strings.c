#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints all string arguments from the third argument
 * @separator: string for separating arguments
 * @n: number of string arguiments to be printed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *a;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char *);
		if (a != NULL)
			printf("%s", a);
		else
			printf("(nil)");
		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
