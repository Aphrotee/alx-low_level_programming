#include "main.h"

/**
 * _puts - prints string
 * @str: input string to be printed
 *
 * Retrun: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (i < 2)
	{
		if (*str == '\0')
			break;
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
