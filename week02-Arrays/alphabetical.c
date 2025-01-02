#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"

int main(void)
{
  int max = 4;
  char phrase[max];
  printf("Enter a phrase: ");
  fgets(phrase, max, stdin);

  for (size_t i = 0, length = strlen(phrase); i < length - 1; i++)
  {
    if (phrase[i] > phrase[i + 1])
    {
      printf("Not in alphabetical order\n");
      printf("%i ", phrase[i]);
      return 0;
    }
  }
  printf("Alphabetical order\n");
  return 0;
}
