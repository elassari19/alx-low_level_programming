#include "main.h"

/**
 * clear_bit - clear bit
 * @n: num
 * @index: index
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
