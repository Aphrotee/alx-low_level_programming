#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string input
 *
 * Return: resulting integer
 */
int _atoi(char *s)
{
	int a, b, c;

	a = 0;
	b = 1;
	while (*s != '\0')
	{
		if (*s == '-')
			b *= -1;
		else if (*s == '+')
			b *= +1;
		else if ((*s >= '0') && (*s <= '9'))
		{
			if (*s == '0')
				c = 0;
			else if (*s == '1')
				c = 1;
			else if (*s == '2')
				c = 2;
			else if (*s == '3')
				c = 3;
			else if (*s == '4')
				c = 4;
			else if (*s == '5')
				c = 5;
			else if (*s == '6')
				c = 6;
			else if (*s == '7')
				c = 7;
			else if (*s == '8')
				c = 8;
			else if (*s == '9')
				c = 9;
			a = (a * 10) + c;
			if ((*(s + 1) > '9') || (*(s + 1) < '0'))
				break;
		}
		s++;
	}
	a *= b;
	return (a);
}
