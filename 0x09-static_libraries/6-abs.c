#include "main.h"

/**
 * _abs - prints absolute value of input
 * @k: integer to be converted to absolute value
 *
 * Return: the absolute value of function
 */
int _abs(int k)
{
	if (k < 0)
		k *= -1;
	return (k);
}
