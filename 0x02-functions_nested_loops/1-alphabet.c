#include "main.h"

/**
 * print_alphabet - print a-z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
