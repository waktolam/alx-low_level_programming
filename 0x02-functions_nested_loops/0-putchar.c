#include <stdio.h>
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
		putchar(*pc);
		pc++;
	}
	putchar('\n');

	return (0);
}
