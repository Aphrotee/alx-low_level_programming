#include <stdio.h>

/**
 * main - entry  point
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	j = 0;
	i = 3;
	while (i < 1024)
	{
		if (i % 3 == 0)
			j += i;
		else if (i % 5 == 0)
			j += i;
		i++;
	}
	printf("%d\n", j);
	return (0);
}
