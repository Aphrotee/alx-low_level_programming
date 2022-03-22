#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: input string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (i < 2)
	{
		if (*s == '\0')
		{
			k = j;
			break;
		}
		s++;
		j++;
	}
	return (k);
}
