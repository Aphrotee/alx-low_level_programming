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
<<<<<<< HEAD
				}
				else
				{
					for (d = 0; d <= 9; d++)
					{
						*aa = a + '0';
						write(1, &aa, 1);
						write(1, b + '0', 1);
						write(1, ' ', 1);
						write(1, c + '0', 1);
						write(1, d + '0', 1);
						if ((a == 9) && (b == 8))
							break;
						write(1, ',', 1);
						write(1, ' ', 1);
					}
=======
					n++;
>>>>>>> 97fef415f6fff7c94ecd3b4c0a6f6d05111b8e3d
				}
			}
		}
	}
	return (0);
}
