#include "main.h"

/**
 * cap_string - capitalizes the first letter of every word in the string
 * @s: string input
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	char *d;

	d = s;
	if (*s != '\0')
	{
		if ((*s >= 'a') && (*s <= 'z'))
			*s -= 32;
		while (*s !='\0')
		{
			if ((*s == ' ') || (*s == '\n') || (*s == '\t') || (*s == ',') || (*s == '.') || (*s == '!') || (*s == '?') || (*s == '"') || (*s == '(') || (*s == ')') || (*s == '{') || (*s == '}'))
			{
				s++;
				if ((*s == ' ') || (*s == '\n') || (*s == '\t'))
				{
					s++;
					if ((*s >= 'a') && (*s <= 'z'))
					{
						*s -= 32;
					}
				}
				else
				{
					if ((*s >= 'a') && (*s <= 'z'))
						*s -= 32;
				}
			}
			s++;
		}
	}
	return (d);
}
