#include "main.h"

/**
 * _isdigit - checks if input is digit
 * @c: input to be checked
 *
 * Return: 1(input is digit) 0(otherwise)
 */
int _isdigit(int c)
{
	int i;

	if ((c >= '0') && (c <= '9'))
		i = 1;
	else
		i = 0;
	return (i);
}
