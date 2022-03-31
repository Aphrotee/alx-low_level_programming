#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number whose factorial is to be returned
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int d;

	if (n == 0)
		d = 1;
	else if (n < 0)
		d = -1;
	if (n > 0)
		d = n * factorial(n - 1);
	return (d);
}
