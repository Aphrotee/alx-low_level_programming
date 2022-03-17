#include "main.h"

/**
 * _isupper - checkes if the input is upper
 * @c: input alphabet
 *
 * Return: 1(upper), 0(otherwise)
 */
int _isupper(int c)
{
	int i;

	if ((c >= 'A') && (c <= 'Z'))
		i = 1;
	else
		i = 0;
	return (i);
}
