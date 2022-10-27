#include "main.h"

/**
 * reverse_array -  reverse the content of an array of integers.
 * @a: pointer to array.
 * @n: number of array elements.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
