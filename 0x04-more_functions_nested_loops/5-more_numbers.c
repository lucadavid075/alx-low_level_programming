#include "main.h"
/**
 * more_numbers -  prints the numbers, from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char i, j;
	int n = 0;

	while (n < 10)
	{
		for (i = 0; j < 15; j++)
		{
			i = j;

			if (j > 9)
			{
				_putchar('1');
				i = j % 10;
			}
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
