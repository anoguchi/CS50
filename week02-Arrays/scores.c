#include <stdio.h>

float average(int length, int array[]);

const int N = 3;

int main()
{
  // get scores
  int scores[N];
  for (int i = 0; i < N; i++)
  {
    printf("Score %i: ", i + 1);
    scanf("%i", &scores[i]);
  }

  printf("Average: %f\n", average(N, scores));

  return 0;
}

float average(int length, int array[])
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return sum / (float)length;
}