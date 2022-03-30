#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - This is basically how the puts function works.
 * @s: string to be printed
 *
 * Return : void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(1, s, 1);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
