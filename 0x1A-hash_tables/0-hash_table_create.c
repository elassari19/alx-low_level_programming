#include "hash_tables.h"

/**
 * hash_table_create - hash table create
 * @size: size
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *hasht = NULL;
	hash_node_t **array = NULL;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (; index < size; ++index)
		array[index] = NULL;

	hasht->size = size;
	hasht->array = array;

	return (hasht);
}
