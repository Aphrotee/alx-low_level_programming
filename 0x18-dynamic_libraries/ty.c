#include "main.h"
#include <stdio.h>

int main()
{
	int a = 4, b = 5;

	printf("%d, %d, %d, %d, %d\n", mul(a, b), add(a, b), div(a, b), sub(a, b), mod(a, b));
	return (0);
}
