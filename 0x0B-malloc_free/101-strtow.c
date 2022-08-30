#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * strtow - splits a string into words
 * @str: string to be split up
 *
 * Return: array of pointers
 */
char **strtow(char *str)
{
	char *a, *x, *y, **arp, **d;
	int i = 0, j, n;

	if (!str || *str == '\0' || *(str + 1) == '\0')
		return (NULL);
	a = str;
	while (*str != '\0')
	{
		if ((*str != ' ' && *str != '\0') &&
				(*(str + 1) == '\0' || *(str + 1) == ' '))
			i++;
		str++;
	}
	str = a;
	arp = (char **)malloc(sizeof(char *) * (i + 1));
	if (!arp)
		return (NULL);
	arp[i - 1] = NULL;
	d = arp;
	for (j = 0; j < i; j++)
	{	x = NULL;
		y = NULL;
		n = 0;
		while (*str != '\0')
		{
			if (*str != ' ' && *str != '\0')
			{
				x = str;
				while (*str != '\0' && *str != ' ')
				{
					n++;
					str++;
				}
				y = str;
				break;
			}
			else if (*str == ' ')
				str++;
		}
		arp[j] = malloc(sizeof(char) *(n + 1));
		if (!(arp[j]))
		{
			free_everything(arp, j);
			return (NULL);
		}
		y = arp[j];
		while (*x != ' ' && *x != '\0')
		{
			*(arp[j]) = *x;
			x++;
			(arp[j])++;
		}
		*(arp[j]) = '\0';
		arp[j] = y;
	}
	return (d);
}
