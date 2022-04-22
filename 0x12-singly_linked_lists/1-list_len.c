#include "lists.h"

/**
 * list_len - returns the number of el in a linked list_t list
 * @h: pointer to head of singly linked list
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
