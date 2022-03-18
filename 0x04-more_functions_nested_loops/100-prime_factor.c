#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main()
{
	long int i, j, k, n = 612852475143;

	i = 2;
	while(i < n)
	{
		if (n % i == 0)
		{
			j = 2;
			while(j < i)
			{
				if (i % j == 0)
				{
					break;
				}
				else
					j++;
			}
			if (j == i)
				k = i;
		}
		i++;
	}
	printf("%d\n", k);
	return (0);
}
