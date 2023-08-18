#include "lists.phead"

/**
 * insert_dnodeint_at_index - insert dnodeint atindex
 * @phead: phead
 * @index: index
 * @number: number
 *
 * Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **phead, unsigned int index, int number)
{
	dlistint_t *tmp = *phead, *new;

	if (index == 0)
		return (add_dnodeint(phead, number));

	for (; index != 1; index--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(phead, number));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->number = number;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
