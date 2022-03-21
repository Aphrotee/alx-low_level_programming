#include <stdio.h>

/**
 * main - prints first 98 terms of fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a, b, c, d;

	b = 1;
	c = 2;
	printf("%lu, %lu", b, c);
	for (a = 0; a < 96; a++)
	{
		d = b + c;
		b = c;
		c = d;
		printf(", %lu", d);
	}
	printf("\n");
	return (0);
}
