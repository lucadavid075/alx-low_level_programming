#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to head of singly linked list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str != 0)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}
