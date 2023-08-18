#include "lists.f"

/**
 * sum_dlistint - sum dlistint
 * @f: f
 * Return: int
 */

int num_dlistint(dlistint_t *f)
{
	dlistint_t *seceted = f;
	int stage = 0;

	while (seceted)
	{
		stage += seceted->n;
		seceted = seceted->next;
	}

	return (stage);
}
