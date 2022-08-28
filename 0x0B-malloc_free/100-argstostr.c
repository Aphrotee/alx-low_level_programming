#include "main.h"
#include <stdlib.h>


#include  "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *d, *nstr = malloc(sizeof(s1) + sizeof(s2) - 4);

	d = nstr;
	if (nstr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (*s1 != '\0')
	{
		*nstr = *s1;
		nstr++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*nstr = *s2;
		nstr++;
		s2++;
	}
	return (d);
}

/**
 * argstostr - concatenates the arguments of a program
 * @ac: number of arguments
 * @av: agruments
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *d, *strr, *n = "\n";
	int i;

	strr = malloc((sizeof(char *) * ac * 2) + 4012);
	d = strr;
	for (i = 0; i < ac; i++)
	{
		strr = str_concat(strr, av[i]);
		strr = str_concat(strr, n);
	}
	return (d);
}
