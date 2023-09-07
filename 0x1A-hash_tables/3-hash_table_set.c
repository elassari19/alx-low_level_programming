#include "hash_tables.h"

/**
 * hash_table_set - hash table set
 * @ht: ht
 * @key: key
 * @value: value
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *pointer = NULL, *creat_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	pointer = ht->array[index];

	if (pointer && strcmp(key, pointer->key) == 0)
	{
		free(pointer->value);
		pointer->value = strdup(value);
		return (1);
	}

	creat_node = malloc(sizeof(hash_node_t));
	if (creat_node == NULL)
		return (0);

	creat_node->key = strdup(key);
	creat_node->value = strdup(value);
	creat_node->next = ht->array[index];
	ht->array[index] = creat_node;
	return (1);
}
