/**
 * print_diagonal - a function that draws a diagonal line in the terminal
 * @n: the number of times the character \ should be printed
 * Return: 0
 */
 
void print_diagonal(int n)
{
	int a, w;

	if ( n <= 0){
		printf("\n");
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (w = 1; w < a; w++)
            {
                printf(" ");
            }
        printf("\\");
        printf("\n");
        }
    }
}
