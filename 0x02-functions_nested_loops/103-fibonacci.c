#include <stdio.h>

/**
 * main - prints first 50 terms of fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	 long a, b, c, d, e;

	b = 1;
	e = 0;
	c = 2;
	for (a = 0; a < 48; a++)
	{
		d = b + c;
		b = c;
		c = d;
		if (d < 4000000)
		{
			if (d % 2 == 0)
				e += d;
		}
		else
			break;
	}
	e += 2;
	printf("%ld\n", e);
	return (0);
}
