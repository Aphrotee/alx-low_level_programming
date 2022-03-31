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
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
	{
		if ( i * i == n)
			return (i);
		else
		{
			i = try_again(n, i);
		}	return(i);
	}
}
int _sqrt_recursion(int n)
{
	int b = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
	{
		if ( b * b == n)
			return (b);
		else
		{
			b = try_again(n, b);
			return(b);
		}
	}
}
