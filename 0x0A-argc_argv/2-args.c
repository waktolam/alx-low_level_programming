#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: counts number of arguments supplied.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
