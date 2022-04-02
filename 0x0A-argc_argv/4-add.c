#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: command array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, k, d = 0;
	char **c = argv;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		argv++;
		for (a = 1; a < argc; a++)
		{
			if ((**argv > '9') || (**argv < '0'))
			{
				printf("Error\n");
				d = 1;
				break;
			}
			argv++;
		}
		argv = c;
		if (d == 0)
		{
			k = 0;
			for (a = 1; a < argc; a++)
			{
				k += atoi(argv[a]);
			}
			printf("%d\n", k);
			d = 0;
		}
	}
	return (d);
}
