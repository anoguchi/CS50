#include <stdio.h>

int main(void)
{
  char *s = "HI!";
  printf("%p\n", s);
  printf("%p\n", &s[0]); // tell me what address is
  printf("%p\n", &s[1]);
  printf("%p\n", &s[2]);
  printf("%p\n", &s[3]);
}