#include <stdio.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: command array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *argv);
	else
		printf("%s\n", argv[0]);
	return (0);
}
