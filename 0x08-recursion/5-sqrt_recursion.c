#include "main.h"
int _try_again(int n, int i);

/**
 * _sqrt_recursion - returns the squareroot of a number
 * @n: number to be rooted
 *
 * Return: squareroot of n
 */

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
		if (b * b == n)
			d = b;
		else
		{
			b = _try_again(n, b);
			d = b;
		}
	}
	return (d);
}
/**
 * _try_again - returns the squareroot of a number
 * @n: number to be rooted
 * @i: dividend
 *
 * Return: squareroot of n
 */
int _try_again(int n, int i)
{
	int j;

	i++;
	if (n < 0)
		j = -1;
	if (n == 0)
		j = 0;
	if (n == 1)
		j = 1;
	if (n > 1)
	{
		if (i * i == n)
			j = i;
		else
		{
			i = _try_again(n, i);
		}	j = i;
	}
	return (j);
}
