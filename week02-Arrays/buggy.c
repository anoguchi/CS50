#include "cs50.h"
#include <stdio.h>

int print_column(int height);

int main()
{
  int h = get_int("Height: ");
  print_column(h);
}

int print_column(int height)
{
  for (int i = 0; i <= height; i++)
  {
    printf("*\n");
  }
}
