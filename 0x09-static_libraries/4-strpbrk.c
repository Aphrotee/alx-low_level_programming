#include "main.h"

/**
 * _strpbrk - kocates the first occurence of any of a given characters in a string
 * @s: string to be checked
 * @accept: given characters
 *
 * Return: pointer to the first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	char *a, *b;

	b = accept;
	while (*s != '\0')
	{
		accept = b;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				a = accept;
				break;
			}
			accept++;
		}
		if (*s == *accept)
			break;
	}
	return (a);
}
