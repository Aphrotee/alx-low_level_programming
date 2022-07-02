#include "hash_tables.h"

/**
 * hash_table_set - assigns contents to the hash table array
 * @ht: hash table that has been created
 * @key: key of content
 * @value: value of content
 *
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int id;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	id = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[id];
	ht->array[id] = new;
	new->next = temp;
	return (1);
}
