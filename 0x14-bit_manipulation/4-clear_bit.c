#include "main.h"


/**
 * clear_bit - setting the value of a bit to
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 for success, or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
