#include "lists.h"

/**
*print_list - prints all the elements of a list_t.
*@h: pointer to list.
*
*Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}