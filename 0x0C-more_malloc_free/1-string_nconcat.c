#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This is a function that concatenates two strings.
 * @s1: The first string to concatente.
 * @s2: The second string to conacatenate.
 * @n: The number of bytes in s2 to be used.
 *
 * Return: Pointer to the new concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int mem = 0, a = 0, b = 0, i;
	char *new_str, *x, *y;

	x = s1;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		s1++;
		a++;
	}
	s1 = x;
	y = s2;
	while (*s2 != '\0')
	{
		s2++;
		b++;
	}
	s2 = y;
	if (b > n)
		mem = n + a + 1;
	else
		mem = b + a + 1;
	s1 = x;
	new_str = (char *)malloc(sizeof(char) * mem);
	if (!new_str)
		return (NULL);
	x = new_str;
	while (*s1 != '\0')
	{
		*new_str = *s1;
		s1++;
		new_str++;
	}
	for (i = 0; i < n  && *s2 != '\0'; i++)
	{
		*new_str = *s2;
		s2++;
		new_str++;
	}
	*new_str = '\0';
	new_str = x;
	return (new_str);
}
