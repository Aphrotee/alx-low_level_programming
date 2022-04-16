#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - takes operation function as input and returns ans to operation
 * @s: arithemetic operator
 *
 * Return: answer to operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t *ops = malloc(sizeof(op_t) * 6);
	int i;
	ops[6] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op == s)
		{
			break;
		}
	}
	free(ops);
	return (ops[i].f);
}
