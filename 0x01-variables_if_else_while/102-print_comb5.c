#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int a = 1, i, j, n, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (m = i; m < 10; m++)
			{
				for (n = j + 1; n < 10; n++)
				{
					if (i == 0 && j == 0 && m == 0 && n == j + 1 && a)
					{
						a = 0;
						n--;
					}
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
				}
			}
		}
	}
	return (0);
}
