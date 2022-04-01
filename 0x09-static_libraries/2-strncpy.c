#include "main.h"

/**
 * _strncpy - copies n bytes of one string to another
 * @src: string to be copied and pasted
 * @dest: string to be updated
 * @n: number of bytes of srs to be used
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	int i;

	if (*src != '\0')
	{
		i = 0;
		while (i < n)
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
	}
	return (d);
}
