#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
  string strings[] = {"cat", "dog", "lion", "horse", "elephant", "eagle"};

  string s = get_string("Animal: ");

  for (int i = 0; i < 6; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0; // success
    }
  }
  printf("Not found\n");
  return 1;
}