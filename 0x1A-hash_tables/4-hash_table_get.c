#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a key in the hash table
 * @ht: hash table
 * @key: key whose value is required
 *
 * Return: pointer to value if it exists, else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int id;

	if (key == NULL  || ht == NULL)
		return (NULL);
	id = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[id];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
