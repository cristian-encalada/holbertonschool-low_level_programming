#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				if (comma_flag)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
