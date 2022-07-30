#include <stdio.h>

int main(void)
{
	int i, j, n, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (m = i; m < 10; m++)
			{
				if (m == i)
					n = j + 1;
				else
					n = 0;
				while (n < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(' ');
					_putchar(m + '0');
					_putchar(n + '0');
					if (i == 9 && j == 8 && m == 9 && n == 9)
						_putchar('\n');
					else
					{
						_putchar(',');
						_putchar(' ');
					}
					n++;
				}
			}
		}
	}
	return (0);
}
