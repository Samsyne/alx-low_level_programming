#include "lists.h"
/**
 * listint_len - count the no of element in a list
 * @h: head pointer
 * Return: no of element in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
