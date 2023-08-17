#include "lists.h"

/**
 * add_dnodeint - add dnodeint
 * @h: h
 * @n: n
 * Return: dlistint_t
 **/

dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *h;
	if (*h)
		(*h)->prev = new;
	*h = new;

	return (new);
}
