#include "lists.h"

void free_dlistint(dlistint_t *h)
{
	dlistint_t *actual_node;
	dlistint_t *next_node;
	
	if (h)
	{
		actual_node = h;
		next_node = h->next;
		while (next_node)
		{
		free(actual_node);
		actual_node = next_node;
		next_node = next_node->next;
		}
		free(actual_node);
	}
}
