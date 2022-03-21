#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random valid passwords
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("Anything; %i\n", num);
	return (0);
}
