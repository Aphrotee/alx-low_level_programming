#include <stdio.h>

/**
 * main - entry point
 *
 * Return: (0) Success
 */
int main(void)
{
	char alph;
	char Alph;

	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	Alph = 'A';
	while (Alph <= 'Z')
	{
		putchar(Alph);
		Alph++;
	}
	putchar('\n');
	return (0);
}
