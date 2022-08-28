#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * strtow - splits a string into words
 * @str: string to be split up
 *
 * Return: array of pointers
 */
char **strtow(char *str)
{
	char **arp, **d;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	arp = (char **)malloc(sizeof(char *) * 1024);
	if (arp == NULL)
		return (NULL);
	d = arp;
	if (*str == ' ')
	{
		while (*str == ' ' && str != NULL)
			str++;
	}
	while (str != NULL)
	{
		if (*str != ' ')
		{
			*arp = str;
			arp++;
			while (*str != ' ' && str != NULL)
				str++;
			while (*str == ' ' && str != NULL)
				str++;
		}
	}
	*arp = NULL;
	return (d);
}
