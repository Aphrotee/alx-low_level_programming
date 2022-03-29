#include "main.h"

/**
 * set_string - sets the first string to the second string
 * @s: string to be changed
 * @to: string s is to be changed to
 */
void set_string(char **s, char *to)
{
	*s = &*to;
}
