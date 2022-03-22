#include "main.h"

/**
 * puts2 - prints string
 * @str: input string to be printed
 *
 * Retrun: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (i < 2)
	{
		if (*str == '\0')
			break;
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
