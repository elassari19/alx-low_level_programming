#include "search_algos.h"

/**
 * linear_search - linear search
 * @array: array
 * @size: size
 * @value: value
 * Return: linear_search
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (int i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
