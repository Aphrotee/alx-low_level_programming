#include "main.h"

/**
 * _strncat - concatenates n bytes of one string to another
 * @src: string to be appended
 * @dest: string to be updated
 * @n: bytes of str to be appended
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i;

	if (*src != '\0')
	{
		while (*dest != '\0')
		{
			dest++;
		}
		i = 0;
		while (i < n)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
	}
	return (d);
}
