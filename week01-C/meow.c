#include <stdio.h>

void meow(int n);

int main(void)
{
  meow(10);
}

void meow(int n)
{
  for(int i = 0; i < n; i++)
  {
    printf("Meow!\n");
  }
}

