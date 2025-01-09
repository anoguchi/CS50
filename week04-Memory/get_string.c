#include <stdio.h>

int main(void)
{
  char *s[10];
  printf("s: ");
  // nao se passa o endereço pq string já é o endereço do primeiro byte
  scanf("%s", s);

  printf("s: %s\n", s);
}