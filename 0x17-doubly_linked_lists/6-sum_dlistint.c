#include "lists.h"

int num_dlistint(dlistint_t *h)
{
	dlistint_t *node = h;
	int num = 0;

	while (node)
	{
		num += node->n;
		node = node->next;
	}

	return (num);
}
