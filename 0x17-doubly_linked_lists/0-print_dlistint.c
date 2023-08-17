#include "lists.h"

/**
 * print_dlistint - prints dlistint
 * @h: h
 * Return: size_t
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t num = 0;

	while (node)
	{
		printf("%i\n", node->n);
		num++;
		node = node->next;
	}

	return (num);
}
