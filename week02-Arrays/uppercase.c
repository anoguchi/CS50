#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  int max = 50;
  char name[max];

  printf("Before: ");
  fgets(name, max, stdin);

  printf("After:  ");
  for (int i = 0, n = strlen(name); i < n; i++)
  {
    printf("%c", toupper(name[i]));
  }

  return 0;
}