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

	if (str == NULL)
		d = NULL;
	else
	{
		d = nstr;
		strcpy(nstr, str);
	}
	return (d);
}
