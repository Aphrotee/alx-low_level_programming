#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c, j, k, m;
	char *r;

	for (m = 0; m < 1; m++)
	{
		if (*s == '\0')
			break;
		j = 0;
		while (*s != '\0')
		{
			*r = *s;
			r++;
			s++;
			j++;
		}
		c = j;
		while (j >= 0)
		{
			s--;
			j--;
		}
		k = 0;
		while (k <= c)
		{
			*s = *r;
			s++;
			r--;
			k++;
		}
	}
}
