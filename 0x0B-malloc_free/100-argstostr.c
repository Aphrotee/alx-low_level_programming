#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - This is a function that concatenates all
 * the arguments of your program.
 * @ac: argument counter
 * @av: argument list
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *new, *d;
	int i, j, tot = 0;

	if (ac == 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			tot++;
		tot++;
	}
	tot++;
	new = malloc(sizeof(char) * tot);
	if (!new)
		return (NULL);
	d = new;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*new = av[i][j];
			new++;

		}
		*new = '\n';
		new++;
	}
	return (d);
}
