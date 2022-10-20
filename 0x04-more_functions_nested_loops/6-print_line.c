/**
 * print_line - a function that draws a straight line in the terminal
 * @n: a number
 * Return: 0
 */

void print_line(int n)
{
  int a;

  if ( n <= 0){
    _putchar("\n");
  }
  else
  {
    for (a = 1; a <= n; a++)
    {
      printf("_");
    }
    _putchar('\n');
}
