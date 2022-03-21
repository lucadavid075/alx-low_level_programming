#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Pointer
 * @b: Pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
