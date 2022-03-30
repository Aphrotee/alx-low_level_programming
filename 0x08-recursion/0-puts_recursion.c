#include "main.h"

/**
 * _puts_recursion - prints a string. This is basically how the puts function works.
 * @s: string to be printed
 *
 * Return : void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
