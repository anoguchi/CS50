#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(int)
{
  char *i = get_string("i: ");
  char *j = get_string("j: ");

  if (strcmp(i, j) == 0)
  {
    printf("Same\n");
  }
  else
  {
    printf("Different\n");
  }
}