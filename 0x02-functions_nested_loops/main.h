#include <unistd.h>
int _putchar(char c);
void print_alphabet(void);

void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		if ((alph) = 'z')
		{
			_putchar('\n');
		}
		alph++;
	}
}
