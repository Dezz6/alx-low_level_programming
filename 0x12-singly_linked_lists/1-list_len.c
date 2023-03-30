#include "lists.h"

/**
 * list_len - Returns the number of elements in a list.
 * @h: singly linked list
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
