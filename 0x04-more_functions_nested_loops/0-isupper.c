#include "main.h"

/**
 * _isupper - Checks for uppercase letters
 * @c: char to check
 *
 * Return: 1if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
