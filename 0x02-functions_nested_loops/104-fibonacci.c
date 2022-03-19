#include <stdio.h>

/**
 * main - prints first 50 terms of fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	long a, b, c, d;

	b = 1;
	c = 2;
	printf("%ld, %ld", b, c);
	for (a = 0; a < 48; a++)
	{
		d = b + c;
		b = c;
		c = d;
		printf(", %ld", d);
	}
	printf("\n");
	return (0);
}
