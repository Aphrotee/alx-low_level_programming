#include "main.h"

/**
 * _strlen_recursion - prints the length of a string.
 * @s: string whose length is to be printed
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int d, j;

	j = d;
	if (*s != '\0')
	{
		s++;
		d = _strlen_recursion(s);
		j++;
		d++;
	}
	else
	{
		j++;
		d = j;
	}
	return (d);
}
