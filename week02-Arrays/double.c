#include <stdio.h>

int main(void)
{
  int maxSequence;

  printf("Max number: ");
  scanf("%i", &maxSequence);

  int sequence[maxSequence];

  sequence[0] = 1;
  printf("%i\n", sequence[0]);

  for (int i = 1; i < maxSequence; i++)
  {
    printf("%i\n", sequence[i] = sequence[i - 1] * 2);
  }
}