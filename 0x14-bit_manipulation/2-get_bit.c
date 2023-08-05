#include "main.h"


/**
 * get_bit - to returns the value of a bit
 * @n: number to evaluate bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 for an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
