#include <stdio.h>

/**
 * main - entry point and prints the number of arguments passed to it.
 * @argc: counts number of arguments supplied.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
