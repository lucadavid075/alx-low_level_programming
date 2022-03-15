#include "main.h"

/**
 * print_sign - Check numbers
 * @n: An inout number
 * Description: prints the signs of the numbers
 * Return: 1 number is positive, 0 number is 0 and -1 number is negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
