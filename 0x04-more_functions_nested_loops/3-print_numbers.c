/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 58; i++)
		putchar(i);
	putchar(10);
}
