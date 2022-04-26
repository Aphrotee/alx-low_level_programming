#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints the content of the node which is a string
 * @h: pointer to struct node
 *
 * Return: number of nodes or length of list
 */
size_t print_list(const list_t *h)
{
	unsigned int i, n;
	size_t d = 0;
	char *s;
	const list_t *ptr = NULL;

	ptr = h;
	if (ptr == NULL)
	{
		return (d);
	}
	while (ptr != NULL)
	{
		n = ptr->len;
		s = ptr->str;
		if (s == NULL)
			n = 0;
		_putchar('[');
		_putchar(n + '0');
		_putchar(']');
		_putchar(' ');	
		if (s == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				_putchar(*s);
				s++;
			}
		}
		_putchar('\n');
		ptr = ptr->next;
		d++;
	}
	return (d);
}
