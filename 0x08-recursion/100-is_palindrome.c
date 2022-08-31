#include <string.h>
#include "main.h"

/**
 * iss_palindrome - This is  a function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: string to be checked.
 * @i: current index of string being checked.
 *
 * Return: 0 or 1
 */
int iss_palindrome(char *s, int i)
{
	int ssize;

	ssize = strlen(s);
	ssize--;

	if (i > ssize / 2)
		return (1);
	if (s[i] == s[ssize - i])
		return (iss_palindrome(s, i + 1));
	else
		return (0);
}

/**
 * is_palindrome - This is  a function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: string to be checked.
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i;

	i = 0;
	return (iss_palindrome(s, i));
}
