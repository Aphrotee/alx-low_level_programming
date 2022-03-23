#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, l, m;
	char *r, c;

	for (m = 0; m < 1; m++)
	{
		if (*s == '\0')
			break;
		i = 0;
		j = 0;
		while (i < 1)
		{
			if (*s == '\0')
				break;
			s++;
			j++;
		}
		c = j;
		while (j >= 0)
		{
			*r = *s;
			r++;
			s--;
			j--; 
		}
		k = 0;
		while (k <= c)
		{
			r--;
			k++;
		}
		l = 0;
		while (l <= c)
		{
			*s = *r;
			r++;
			s++;
		}
	}
}
