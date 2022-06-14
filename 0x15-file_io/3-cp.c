#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - makes a copy of a file input
 * @ac: argument counter
 * @av: arguments array
 *
 * Return: 0
 */
int main(int ac, const char **av)
{
	int a, b, c, fd2;
	FILE *fd1;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((access(av[1], F_OK) != 0) || (access(av[1], R_OK) != 0))
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = fopen(av[1], "r");
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (access(av[2], W_OK) != 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	for (c = getc(fd1); c != EOF; c = getc(fd1))
		write(fd2, &c, 1);
	a = fclose(fd1);
	b = close(fd2);
	if (a == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", av[1]);
		exit(100);
	}
	if (b == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
	}
	return (0);
}
