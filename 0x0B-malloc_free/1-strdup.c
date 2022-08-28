#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string and returns ptr to duplicate
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *d, *nstr = malloc(sizeof(str) + 5);

	if (str == NULL || nstr == NULL)
		d = NULL;
	else
	{
		d = nstr;
		while (*str != '\0')
		{
			*nstr = *str;
			nstr++;
			str++;
		}
		nstr = '\0';
	}
	return (d);
}
