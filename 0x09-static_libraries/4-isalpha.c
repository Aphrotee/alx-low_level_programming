#include "main.h"

/**
 * _isalpha - to check if input is an alphabet
 * @c: input to be checked
 *
 * Return: 1 (success), 0 (otherwise)
 */
int _isalpha(int c)
{
	int i;

	if ((c >= 'A') && (c <= 'z'))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
