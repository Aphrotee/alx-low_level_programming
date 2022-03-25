#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @s: string to be uppercased
 *
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	char *d;

	d = s;
	if (*s != '\0')
	{
		while (*s != '\0')
		{
			if ((*s >= 'a') && (*s <= 'z'))
			{
				*s -= 32;
			}
			s++;
		}
	}
	return (d);
}
