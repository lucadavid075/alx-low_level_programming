#include "main.h"
#include <stdio.h>

/**
 * isupper - checks for uppercase character
 * 
 * Return: 1 if c is lowercase and 0 otherwise
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
