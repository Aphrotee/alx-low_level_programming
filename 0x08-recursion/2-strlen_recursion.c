#include "main.h"

/**
 * _strlen_recursion - prints the length of a string.
 * @s: string whose length is to be printed
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int d, j = 0;

	if (*s != '\0')
	{
		j++;
		s++;
		d = _strlen_recursion(char *s);
	}
	else
	{
		j++;
		d = j;
	}
	return (d);
}
