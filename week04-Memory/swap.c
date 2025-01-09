#include <stdio.h>

void swap(int a, int b);

int main(void)
{
  int x = 1;
  int y = 2;

  printf("x is %i, y is %i\n", x, y);
  // int tmp = x;
  // x = y;
  // y = tmp;
  swap(x, y);
  printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
}