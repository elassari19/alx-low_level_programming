#include "lists.h"

/**
 * dlistint_len - dlistint len
 * @h: h
 * Return: size_t
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t num = 0;

	while (node)
	{
		num++;
		node = node->next;
	}

	return (num);
}
