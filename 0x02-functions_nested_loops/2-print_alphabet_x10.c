#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Print Alphabet in lowercase 10 times
 * Return: Success (0) Always
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
