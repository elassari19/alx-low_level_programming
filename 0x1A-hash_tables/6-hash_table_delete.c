#include "hash_tables.h"

/**
 * hash_table_delete - hashtabledelete
 * @ht: ht
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *pointer = NULL, *select = NULL;

	if (ht && ht->size && ht->array)
	{
		for (; index < ht->size; ++index)
		{
			pointer = ht->array[index];

			if (pointer)
			{
				if (pointer->next)
				{
					pointer = pointer->next;
					while (pointer)
					{
						select = pointer;
						pointer = pointer->next;
						free(select->key);
						free(select->value);
						free(select);
					}
				}

				pointer = ht->array[index];
				if (pointer->key && pointer->value)
				{
					free(pointer->key);
					free(pointer->value);
				}
			}

			free(pointer);
		}

		free(ht->array);
		free(ht);
	}
}
