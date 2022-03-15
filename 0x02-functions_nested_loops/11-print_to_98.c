#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: prints all natural numbers from n to 98
 * @n: Number to start
 * Return: 0 or 1
 */

void print_to_98(int n)
{
	if  (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
