#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		if (alph == 'e')
		{
			alph++;
		}
		else if (alph == 'q')
		{
			alph++;
		}
		else
		{
			putchar(alph);
			alph++;
		}
	}
	putchar('\n');
	return (0);
}
