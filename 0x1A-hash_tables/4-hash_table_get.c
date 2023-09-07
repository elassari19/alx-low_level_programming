#include "hash_tables.h"

/**
 * hash_table_get - hash table get
 * @ht: ht
 * @key: key
 * Return: char
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *pointer = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	pointer = ht->array[index];

	if (pointer == NULL)
		return (NULL);

	while (strcmp(key, pointer->key) != 0)
		pointer = pointer->next;

	return (pointer->value);
}
