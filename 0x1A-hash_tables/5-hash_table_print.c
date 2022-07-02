#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_cont;
	unsigned long int i, a = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_cont = ht->array[i];
		while (hash_cont != NULL)
		{
			if (a)
				printf(", ");
			printf("'%s': '%s'", hash_cont->key, hash_cont->value);
			a++;
			hash_cont = hash_cont->next;
		}
	}
	printf("}\n");
}
