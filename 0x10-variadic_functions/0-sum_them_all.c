#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments passed in from the second argument
 * @n: number of arguments to be added
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int d;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		d += va_arg(ap, int);
	}
	va_end(ap);
	return (d);
}
