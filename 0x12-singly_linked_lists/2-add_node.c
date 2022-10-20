#include "lists.h"

/**
* add_nodeint - adds a node at the end
* @head: start of node
* @n: value to give new node
* Return: the linked list
*/

list_t *add_node(list_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
