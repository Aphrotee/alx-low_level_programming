#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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
