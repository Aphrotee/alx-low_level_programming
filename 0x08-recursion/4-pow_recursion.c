#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: base number integer
 * @y: power integer
 *
 * Return: value of x ** y
 */
int _pow_recursion(int x, int y)
{
	int b;

	if (y == 0)
		b = 1;
	else if (y < 0)
		b = -1;
	else
	{
		y--;
		b = _pow_recursion(x, y);
		b *= x;
	}
	return (b);
}
