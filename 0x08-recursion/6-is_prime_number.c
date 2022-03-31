#include "main.h"
int try_again(int n, int i);

/**
 * is_prime_number - checks if an input number is a prime number or not
 * @n: number to be checked
 *
 * Return: 1(if n is prime number), 0(otherwise)
 */
int is_prime_number(int n)
{
	int b = 2, d;

	if (n <= 1)
		d = 0;
	else
	{
		if ((n % b == 0) && (b != n))
			d = 0;
		else if ((n % b == 0) && (b == n))
			d = 1;
		else
		{
			b = try_again(n, b);
			d = b;
		}
	}
	return (d);
}

/**
 * try_again - checks if an input number is a prime number or not
 * @n: number to be checked
 * @i: divisor
 *
 * Return: 1(if n is prime number), 0(otherwise)
 */
int try_again(int n, int i)
{
	int j;

	i++;
	if (n <= 1)
		j = 0;
	else
	{
		if ((n % i == 0) && (i != n))
			j = 0;
		else if ((n % i == 0) && (i == n))
			j = 1;
		else
		{
			i = try_again(n, i);
			j = i;
		}
	}
	return (j);
}
