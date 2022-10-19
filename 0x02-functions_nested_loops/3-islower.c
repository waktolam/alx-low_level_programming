#include "main.h"
/**
  * _islower - check if a character is lower
  * @c: character
  * Return: 1 if character is lower else 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
