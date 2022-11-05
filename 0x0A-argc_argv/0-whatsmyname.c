#include <stdio.h>

/**
 * main - entry point and prints the program name followed by a new line.
 * @argc: counts number of arguments supplied.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
