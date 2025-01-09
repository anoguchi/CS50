#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int *x = malloc(3 * sizeof(int)); // it's an array

  // wrong
  x[1] = 72;
  x[2] = 73;
  x[3] = 33;

  // correct
  /*
  x[0] = 72;
  x[1] = 73;
  x[2] = 33;

  free(x);
  return 0;
   */
}