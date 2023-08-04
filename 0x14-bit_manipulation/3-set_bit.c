#include "main.h"

/**
 * set_bit - sets bit
 * @n: num
 * @index: index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
