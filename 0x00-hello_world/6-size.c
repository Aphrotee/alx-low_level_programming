#include <stdio.h>

/**
 * main- entry point
 * @sizechar: is the size of char type
 * @sizeint: is the size of int type
 * @sizelongint: is the size of long it type
 * @sizelonglongint: is the size of long long int type
 * @sizefloat is the size of float type
 *
 * the printf functions for each types prints the sizes
 * Return: (0) Success
 */
int main(void)
{
	int sizechar;
	int sizelongint;
	int sizelonglongint;
	int sizefloat;
	int sizeint;

	sizechar=sizeof(char);
	sizeint=sizeof(int);
	sizelongint=sizeof(long int);
	sizelonglongint=sizeof(long long int);
	sizefloat=sizeof(float);
	printf("Size of a char: %d byte(s)\n", sizechar);
	printf("Size of an int: %d byte(s)\n", sizeint);
	printf("Size of a long int: %d byte(s)\n", sizelongint);
	printf("Size of a long long int: %d byte(s)\n", sizelonglongint);
	printf("Size of a float: %d byte(s)\n", sizefloat);
	return (0);
}
