#include "main.h"

/**
 * get_bit - get biy
 * @n: num
 * @index: indexe
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);

int number;

number = (n >> index) & 1;

return (number);
}
