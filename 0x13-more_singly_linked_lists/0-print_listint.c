#include "lists.h"

/**
 * print_listint - This prints every elments of a listint_t list.
 * @h: This is a pointer to the head of listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
