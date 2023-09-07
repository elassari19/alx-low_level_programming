#include "hash_tables.h"

/**
 * hash_table_print - hash_table_print
 * @ht: ht
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	short print_items = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; i < ht->size; ++i)
	{
		node = ht->array[i];

		while (node)
		{
			if (print_items == 1)
				printf(", ");

			print_items = 1;
			printf("'%s': '%s'", (char *) node->key, (char *) node->value);

			node = node->next;
		}
	}

	printf("}\n");
}
