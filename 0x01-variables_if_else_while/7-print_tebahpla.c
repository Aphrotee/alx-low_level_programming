#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	char alph;

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
