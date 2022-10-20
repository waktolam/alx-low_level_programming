#include "main.h"
/**
 * _isupper - check if character is uppercase or not
 * @c: character
 * Return: 1 if character is upper, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
