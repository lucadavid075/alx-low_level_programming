#include "lists.h"

/**
 * free_list - frees memory of a linked list
 * @head: pointer to head of singly linked list
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
