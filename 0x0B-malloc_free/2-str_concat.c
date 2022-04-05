#include  "main.h"
#include <stdlib.h>

/**
 * Str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *d, *nstr = malloc(sizeof(s1) + sizeof(s2));

	d = nstr;
	while (s1 != '\0')
	{
		*nstr = *s1;
		nstr++;
		s1++;
	}
	while (s2 != '\0')
	{
		*nstr = *s2;
		nstr++;
		s2++;
	}
	return (d);
}
