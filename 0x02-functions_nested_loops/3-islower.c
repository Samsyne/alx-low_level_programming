#include "main.h"
/**
 * _islower - checks for lowercase char
 * @c: character to check
 * Returns: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
