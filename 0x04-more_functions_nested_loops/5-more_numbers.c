#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
int i = 0, j;
for (i = 0; i < 10; i++)
	for (j = 0; j <= 14; j++)
		printf("%d", j);
	printf("\n");
}
