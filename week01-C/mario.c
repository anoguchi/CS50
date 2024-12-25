#include <stdio.h>

int getMaxRowSize();
void print_row(int bricks);

int main(void)
{
  int maxRow = getMaxRowSize();
  print_row(maxRow);  
}

int getMaxRowSize()
{
  int height;
  printf("Height: ");
  scanf("%i", &height);
  return height;
}

void print_row(int bricks)
{
  for (int i = 0; i < bricks; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}