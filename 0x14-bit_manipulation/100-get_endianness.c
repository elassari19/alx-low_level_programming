#include "main.h"

/**
 * get_endianness - get endianness
 * Return: int
 */

int get_endianness(void)
{
unsigned int number = 1;
char *str = (char *) &number;

return (*str);
}
