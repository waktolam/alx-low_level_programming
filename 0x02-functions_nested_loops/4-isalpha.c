#include "main.h"
/**
  * _isalpha - check if a character is alphabet or not
  * @c: character
  * Return: 1 if character is alphabet else 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
