#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: number of command line arguments
 * @av: array of command line arguments
 *
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	int a = atoi(av[1]), b = atoi(av[3]), c;
	char *op = av[2];

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*op != '+') && (*op != '-') && (*op != '*') && (*op != '/') && (*op != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (((*op == '/') || (*op == '%')) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	c = get_op_func(op)(a, b);
	printf("%d\n", c);
	return (0);
}
