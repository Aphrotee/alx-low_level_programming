#include <stdio.h>
#include <stdlib.h>
int change(int i);

/**
 * main - entry point
 * @ac: number of command line arguments
 * @av: command line arguments
 *
 * Return: 0(success), 1(failure)
 */
int main(int ac, char **av)
{
	int n, b, c;

	if (ac != 2)
	{
		printf("Error\n");
		n = 1;
	}
	else
	{
		c = atoi(av[1]);
		b = change(c);
		printf("%d\n", b);
		n = 0;
	}
	return (n);
}
/**
 * change - returns number of coins needed
 * @i: cents to be changed
 *
 * Return: number of coins needed
 */
int change(int i)
{
	int d;

	if (i < 0)
	{
		d = 0;
	}
	else
	{ 
		if (i / 25 > 0)
		{
			d = i / 25;
			d += change(i % 25);
		}
		else if (i / 10 > 0)
		{
			d = i / 10;
			d += change(i % 10);
		}
		else if (i / 5 > 0)
		{
			d = i / 5;
			d += change(i % 5);
		}
		else if (i / 2 > 0)
		{
			d = i / 2;
			d += change(i % 2);
		}
		else if (i / 1 > 0)
		{
			d = i;
		}
	}
	return (d);
}
