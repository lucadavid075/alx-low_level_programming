#include "main.h"

/**
 * _islower -  Entry point
 * @c: An input character
 * Description: prints alphabet is lowercase 10 times
 * Return: 1 is lowercase or 0 is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
