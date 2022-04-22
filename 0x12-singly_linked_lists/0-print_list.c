#include "lists.h"

/**
 * print_list - prints all elemets in a list_t list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		if (h->str != 0)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		size++;
	}
	return (size);
}
