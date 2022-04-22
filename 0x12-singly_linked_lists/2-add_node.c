#include "lists.h"

/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: pointer to head of singly linked list
 * @str: string to add as new node in list
 *
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new_node;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new_node = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		content[i] = str[i];
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(content);
		return (NULL);
	}
	new_node->str = content;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
