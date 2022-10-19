#include "main.h"
/**
  * print_last_digit - last digit
  * @w: a number
  * Return: last digit
  */
int print_last_digit(int w)
{
	int ld;

	ld = (w % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
