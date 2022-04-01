#include "main.h"

/**
 * _memcpy - copies n bytes of memory of src into dest
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d;

	d = dest;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (d);
}
