#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int a, b, c, d;
	void *aa = NULL;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = a; c <= 9; c++)
			{
				if (c == a)
				{
	 				for (d = b + 1; d <=9; d++)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
						if ((a == 9) & (b == 8))
							break;
						putchar(',');
						putchar(' ');
					}
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
				}
			}
		}
	}
	putchar('\n');
return (0);
}
