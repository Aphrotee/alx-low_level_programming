#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;

	}
	putchar('\n');
	return (0);
}
