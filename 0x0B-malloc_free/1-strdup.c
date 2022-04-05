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
	int i;

	if (*str == NULL)
		d = NULL;
	else
	{
		nstr = malloc(sizeof(str));
		d = nstr;
		while (i < (sizeof(str)/sizeof(char)))
		{
			*nstr = *str;
			str++;
			nstr++;
			i++;
		}
	}
	return (d);
}
