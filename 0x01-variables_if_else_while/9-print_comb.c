#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	char num;
	char com;

	com = ',';
	num = '0';
	while (num < '9');
	{
		putchar(num);
		putchar(com);
		num++;
	}
	putchar('9');
	putchar('\n');
	return (0);
}
