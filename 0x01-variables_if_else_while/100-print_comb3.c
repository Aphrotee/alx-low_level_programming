#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int a, b, num;

	num = 0;
	while (num < 9)
	{
		a = num;
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
