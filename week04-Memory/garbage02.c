#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *x;
  int *y;

  x = malloc(sizeof(int));

  *x = 42;

  y = x;

  *y = 13;

  printf("x = %i\n", *x);
  printf("y = %i\n", *y);
}