#include "main.h"
/**
 * set_bit - sets a bit
 * @n: integer to grab 
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maximum;
	unsigned long int mask = 1;

	maximum = (sizeof(unsigned long int) * 8);
	if (index > maximum)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
