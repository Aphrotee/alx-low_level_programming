#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char a = *s;
	int i, j, k, l, m;
	char *r, b;

	for (m = 0; m < 1; m++)
	{
		if (*s == '\0')
			break;
		i = 0;
		while (i < 1)
		{
			if (*s == '\0')
				break;
			s++;
		}
		s--;
		b = *s;
		j = 0;
		while (j < 1)
		{
			*r = *s;
			
			if (*s == a)
				break;
			r++;
			s--;
		}
		k = 0;
		while (k < 1)
		{
			if (*r == b)
				break;
			r--;
		}
		l = 0;
		while (l < 1)
		{
			if (*r == '\0')
				break;
			*s = *r;
			r++;
			s++;
		}
	}
}
