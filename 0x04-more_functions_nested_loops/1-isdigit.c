#include "main.h"
/**
 * _isdigit - check if character is uppercase or not
 * @c: digit
 * Return: 1 if number, else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
