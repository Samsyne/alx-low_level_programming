#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - links n byte of string to another
 * @s1: strings that recieves append
 * @s2: strins to concatenate from
 * @n: no of byte that will link from s2 - s1
 * Return: ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	if (n < b)
		s = malloc(sizeof(char) * (a + n + 1));
	else
		s = malloc(sizeof(char) * (a + b + 1));

	if (!s)
		return (NULL);

	while (i < a)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < b && i < (a + n))
		s[i++] = s2[j++];

	while (n >= b && i < (a + b))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
