#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 * @h: singly linked list
 * Return: number of elements in h
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
