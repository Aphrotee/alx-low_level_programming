#include <unistd.h>
/**main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 'b';

	write(1, a, 1);
	return (0);
}
