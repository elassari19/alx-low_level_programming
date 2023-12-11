#include "search_algos.h"

/**
  * binary_search - binary search
  * @array: array
  * @size: size
  * @value: value
  * Return: binary_search
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, leftNode, rightNode;

	if (array == NULL)
		return (-1);

	for (leftNode = 0, rightNode = size - 1; rightNode >= leftNode;)
	{
		printf("Searching in array: ");
		for (i = leftNode; i < rightNode; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = leftNode + (rightNode - leftNode) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rightNode = i - 1;
		else
			leftNode = i + 1;
	}

	return (-1);
}
