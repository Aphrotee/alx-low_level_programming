#include "main.h"

/**
 * _sqrt_recursion - returns the squareroot of a number
 * @n: number to be rooted
 *
 * Return: squareroot of n
 */

/**
 * try_again - returns the squareroot of a number
 * @n: number to be rooted
 * @i: dividend
 *
 * Return: squareroot of n
 */

int try_again(int n, int i)
{
	i++;
	if (n < 0)
		j = -1;
	if (n == 0)
		j = 0;
	if (n == 1)
		j = 1;
	if (n > 1)
	{
		if ( i * i == n)
			j = i;
		else
		{
			i = try_again(n, i);
		}	j = i;
	}
	return (j);
}
int _sqrt_recursion(int n)
{
	int b = 1, d;

	if (n < 0)
		d = -1;
	if (n == 0)
		d = 0;
	if (n == 1)
		d  = 1;
	if (n > 1)
	{
		if ( b * b == n)
			d = b;
		else
		{
			b = try_again(n, b);
			d = b;
		}
	}
	return (d);
}
