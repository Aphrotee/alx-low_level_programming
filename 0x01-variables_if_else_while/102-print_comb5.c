#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int a, b, c, d;

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
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
						if ((a == 9) && (b == 8))
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
