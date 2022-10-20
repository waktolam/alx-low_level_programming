#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 and then a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
