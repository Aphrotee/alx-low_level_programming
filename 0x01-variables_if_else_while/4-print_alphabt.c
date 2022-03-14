#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (((alph != 'e') || (alph != 'q')) && (alph < 'z'))
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
