#include "main.h"
/**
  * main - the main function
  *
  * Return : 0
  */
int main(void)
{
	char *pc = "_putchar";

	while (*pc)
	{
		_putchar(*pc);
		pc++;
	}
	_putchar('\n');

	return (0);
}
