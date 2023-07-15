#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - it creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored with no of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
