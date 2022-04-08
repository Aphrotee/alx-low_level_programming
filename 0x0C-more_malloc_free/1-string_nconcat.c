#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_concat - concatenates s1 and n bytes of s2
 * @s1: first string
 * @s2: second string
 * 
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int b)
{
	unsigned int i, n;
	char *str, *d;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	if (b < strlen(s2))
		n = b;
	else if (b >= strlen(s2))
		n = strlen(s2) - 1;
	str = malloc(sizeof(s1) + n + 1);
	d = str;
	while (*s1 != '\0')
	{
		*str = *s1;
		s1++;
		str++;
	}
	i = 0;
	while (i < n)
	{
		*str = s2[i];
		i++;
		str++;
	}
	return (d);
}
