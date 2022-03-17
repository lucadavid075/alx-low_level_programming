#include "main.h"

/**
 * _isdigit - checks for a digit (0 throught 9)
 * @c: An input alphabet to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
