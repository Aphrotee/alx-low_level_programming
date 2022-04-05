#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string and returns ptr to duplicate
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *d, *nstr;

	if (*str == '\0')
		d = NULL;
	else
	{
		nstr = malloc(sizeof(str));
		d = nstr;
		while (*str != '\0')
		{
			*nstr = *str;
			str++;
			nstr++;
		}
	}
	return (d);
}
