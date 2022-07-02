#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash_cont, *temp;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		hash_cont = ht->array[i];
		while (hash_cont != NULL)
		{
			temp = hash_cont;
			hash_cont = hash_cont->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
