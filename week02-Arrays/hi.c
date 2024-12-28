#include <stdio.h>

int main(void)
{
  char hi[] = "HI!";
  hi[1] = 'o';
  printf("%c%c%c%i\n", hi[0], hi[1], hi[2], hi[3]);

  return 0;
}