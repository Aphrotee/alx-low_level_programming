#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j, n, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (m = i; m < 10; m++)
			{
				if (m == i)
					n = j + 1;
				else
					n = 0;
				while (n < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(m + '0');
					putchar(n + '0');
					if (i == 9 && j == 8 && m == 9 && n == 9)
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
					n++;
				}
			}
		}
	}
	return (0);
}
