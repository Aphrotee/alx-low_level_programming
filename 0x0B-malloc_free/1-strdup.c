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
	int i = 0;

	if (str == NULL)
		d = NULL;
	else
	{
		nstr = malloc(sizeof(str) + 1);
		d = nstr;
		while (*str != '\0')
		{
			nstr[i] = *str;
			str++;
			i++;
		}
	}
	return (d);
}
