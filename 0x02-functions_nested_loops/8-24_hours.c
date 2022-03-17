#include "main.h"

/**
 * jack_bauer - prints every minute of the song
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, e, f, g, h;

	a = 0;
	while (a < 2)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	e = 2;
	f = 0;
	while (f < 4)
	{
		g = 0;
		while (g < 6)
		{
			h = 0;
			while (h <= 9)
			{
				_putchar(e + '0');
				_putchar(f + '0');
				_putchar(':');
				_putchar(g + '0');
				_putchar(h + '0');
				_putchar('\n');
				h++;
			}
			g++;
		}
		f++;
	}
}
