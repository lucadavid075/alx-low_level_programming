#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10, starting 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');

	putchar('\n');

	return (0);
}
