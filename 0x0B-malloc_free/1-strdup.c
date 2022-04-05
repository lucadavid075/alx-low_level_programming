#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: 0(NULL) for error or the string copied
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/* +1 on the size puts the end of the string character */
	m = malloc(size * sizeof(*str) + 1);

	if (m == NULL)
		return (NULL);

	for (; i < size; i++)
		m[i] = str[i];

	return (m);
}
