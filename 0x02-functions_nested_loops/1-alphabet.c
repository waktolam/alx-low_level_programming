#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
