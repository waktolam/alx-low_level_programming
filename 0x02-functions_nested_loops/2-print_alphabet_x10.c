#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet_x10(void)
{
	int alpha;
  
  for (int j = 0; j < 10; j++)
  {
    for (alpha = 'a'; alpha <= 'z'; alpha++)
	  {
      		_putchar(alpha);
	  }
      _putchar('\n');
    }
}
