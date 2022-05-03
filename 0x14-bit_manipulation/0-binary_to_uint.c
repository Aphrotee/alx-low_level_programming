#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - 0 converts binary to unsigned decimal
 * @b: string of 0 and 1 chars reps binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, d = 0, j = 1;
	unsigned int i, k = 0;
	const char *c = b;

	if (b == NULL)
		return (0);
	i = 0;
	while (*b != '\0')
	{
		b++;
		i++;
	}
	b = c;
	k = i - 1;
	while (*b != '\0')
	{
		if (*b == '1')
		{
			j = 1;
			for (a = 0; a < k; a++)
				j *= 2;
			d += j;
			k--;
		}
		else if (*b == '0')
			k--;
		else
			return (0);
		b++;
		i--;
	}
	return (d);
}
