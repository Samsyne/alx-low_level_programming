#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node the list_t list
 *
 * Return: number of node in the
 */
size_t list_len(const list_t *h)
{
	int i;
if (h == NULL)
	return (0);
for (i = 1; h->next != NULL; i++)
h = h->next;
return (i);
}
