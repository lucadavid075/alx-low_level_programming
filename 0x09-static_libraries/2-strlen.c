#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Pointer of type string
 * Return: Success
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
