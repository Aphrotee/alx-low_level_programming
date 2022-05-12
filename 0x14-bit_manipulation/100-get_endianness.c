/**
 * get_endianness - checks if machine is little of big endian
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *)&x;
	int d;

	if (*c == 0x10)
		d = 1;
	else
		d = 0;
	return (d);
}
