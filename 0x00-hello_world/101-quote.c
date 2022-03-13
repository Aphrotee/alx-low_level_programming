#include <stdio.h>

/**
 * main - entry point
 * @write: string
 *
 * the string in the writevariable is printed
 * Return: (1)
 */
int write(int filedes, const char *buf, unsingned int nbyte);
int main(int argc, char** argv)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 13);
	return 1;
}
