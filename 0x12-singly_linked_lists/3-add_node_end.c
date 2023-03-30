#include "lists.h"

/**
 * add_node - Adds a node to head of a list
 * @head: Double pointer to the list
 * @str: String to add to the node
 * Return: Address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t num = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);

	for (num = 0; str[num]; num++)
		;
	new->len = num;
	new->next = *head;
	*head = new;

	return (*head);
}
