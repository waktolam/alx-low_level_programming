#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array of integers
 * @a: Array.
 * @n: number of values to be printed.
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		printf("%d", a[w]);
		if (w != n - 1)
			printf(", ");
	}
	printf("\n");
}
