#include <stdio.h>

int getMaxRowSize();
void print_decreasingToIncreasing(int n);
void print_tree(int n);
void print_pyramid(int n);
void print_invertedPyramid(int n);
void print_diamond(int n);

int main(void)
{
  int maxRow = getMaxRowSize();
  print_diamond(maxRow);
}

int getMaxRowSize()
{
  int height;
  printf("Height: ");
  scanf("%i", &height);
  return height;
}

void print_decreasingToIncreasing(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++) // decreasing
    {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) // increasing
    {
      printf("* ");
    }
    printf("\n");
  }
}

void print_tree(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}

void print_pyramid(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      printf("  ");
    }
    for (int j = 1; j < i; j++)
    {
      printf("* ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}

void print_invertedPyramid(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("  ");
    }
    for (int j = i; j < n; j++)
    {
      printf("* ");
    }
    for (int j = i; j <= n; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}

void print_diamond(int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      printf("  ");
    }
    for (int j = 1; j < i; j++)
    {
      printf("* ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("  ");
    }
    for (int j = i; j < n; j++)
    {
      printf("* ");
    }
    for (int j = i; j <= n; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
