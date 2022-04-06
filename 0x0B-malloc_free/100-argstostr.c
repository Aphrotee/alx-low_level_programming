#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments of a program
 * @ac: number of arguments
 * @av: agruments
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *d, *strr = malloc(0), *n = "\n";
	int i;

	d = strr;
	strr = malloc((sizeof(char *) * ac * 2) + 4012);
	for (i = 0; i < ac; i++)
	{
		*strr = **av;
		strr++;
		*strr = *n;
		strr++;
	}
	return (d);
}
