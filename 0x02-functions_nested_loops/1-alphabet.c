#include "main.h"

/**
 * print_alphabet - Print th alphabet in lowercase
 *
 * Return: Success (0) Always
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
