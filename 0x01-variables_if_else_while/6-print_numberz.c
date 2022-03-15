#include <stdio.h>

/**
 * maun - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int num;
	char x = 56;

	num = 0;
	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	write(1, &x, 1);
	putchar('\n');
	return (0);
}
