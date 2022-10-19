#include "main.h"
/**
  * print_sign - check if a character is alphabet or not
  * @n: number
  * * Return: 1 and prints '+' if n > 0, 0 and prints '0' if n = 0, -1 and prints '-' if n < 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}
