#include "main.h"

/**
 * jack_bauer - prints every minute of the song
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, e, f, g, h;

	for (a = 0; a < 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
	e = 2;
	for  (f = 0; f < 4; f++)
	{
		for (g = 0; g < 6; g++)
		{
			for (h = 0; h <= 9; h++)
			{
				_putchar(e + '0');
				_putchar(f + '0');
				_putchar(':');
				_putchar(g + '0');
				_putchar(h + '0');
				_putchar('\n');
			}
		}
	}
}
