#include <cs50.h>
#include <stdio.h>

int sum(int a, int b);
int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");

  printf("%i\n", sum(x, y));
  
}

int sum(int a, int b)
{
  return a + b;
}