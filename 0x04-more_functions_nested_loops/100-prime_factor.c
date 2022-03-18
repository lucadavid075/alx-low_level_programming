#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, n = 612852475143;

	for (i  = 2; i <= number; i++)
	{

		if (n % i == 0)
		{
			number = number / i;
			i--;
		}

	}
	printf("%lu\n", i);
	return (0);

}
