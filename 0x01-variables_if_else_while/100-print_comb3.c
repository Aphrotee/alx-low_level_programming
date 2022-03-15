#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int num = 0;

	while (num < 100)
	{
		putchar(num/10 + '0');
		putchar(num%10 + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
}
