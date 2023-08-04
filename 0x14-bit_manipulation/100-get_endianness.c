#include "main.h"

/**
 * get_endianness - get wndianness
 * Return: int
 */


int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
