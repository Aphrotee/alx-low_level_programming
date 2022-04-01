#include "main.h"

/**
 * _strcat - concatenates strings
 * @src: string to be appeneded
 * @dest: string to be updated by src
 *
 * Return: the pointer of dest
 */
char *_strcat(char *dest, char *src)
{
	char *d;

	if (*src != '\0')
	{
		d = dest;
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	return (d);
}
