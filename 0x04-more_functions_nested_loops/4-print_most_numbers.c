#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 skip 2 and 4
 * Return: 0 to 9
 */
void print_most_numbers(void)
{
  for (i = 0; i < 10; i++)
    if(i != 2 && i != 4)
      printf("%d",i);
  printf("\n");
}
