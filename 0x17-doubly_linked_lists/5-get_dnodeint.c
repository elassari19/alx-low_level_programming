#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	dlistint_t *node = h;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
