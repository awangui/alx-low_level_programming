#include "lists.h"
/**
 * add_node - add a new node at beginning of a list_t
 * @head: head node
 * @str: data of node
 *
 * Return: the node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = add;

	return (add);
}
