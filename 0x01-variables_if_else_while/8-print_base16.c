#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	char _alph;
	char _num;

	_num = '0';
	while (_num <= '9')
	{
		putchar(_num);
		_num++;
	}
	_alph = 'a';
	while (_alph <= 'f')
	{
		putchar(_alph);
		_alph++;
	}
	putchar('\n');
	return (0);
}
