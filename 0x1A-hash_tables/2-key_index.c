#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: the key string
 * @size: size of the hash table
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int d;

	d = hash_djb2(key);
	d = d % size;
	return (d);
}
