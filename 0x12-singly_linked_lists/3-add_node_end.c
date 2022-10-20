#include "lists.h"

/**
* add_node_end - adds node at the end
* @head: head of node linked list
* @n: value to put new node at end
* Return: struct
*/

list_t *add_node_end(list_t **head, const int n)
{
	listint_t *new;

	listint_t *tmp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;

		return (new);
	}
}
