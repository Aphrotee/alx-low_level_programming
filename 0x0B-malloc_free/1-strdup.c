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
	char *d, *nstr = malloc(sizeof(str) + 1);

	if (str == NULL)
		d = NULL;
	else
	{
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
