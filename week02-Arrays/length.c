#include <stdio.h>
#include <string.h>

int main(void)
{
  int max = 50;
  char name[max];
  printf("Name: ");
  fgets(name, max, stdin);

  int length = strlen(name);
  printf("%i", length);

  return 0;
}