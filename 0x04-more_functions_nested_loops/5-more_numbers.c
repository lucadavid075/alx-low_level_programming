#include "main.h"
/**
 * more_numbers -  prints the numbers, from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char n, c, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			c = n;

			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
