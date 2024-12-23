#include <cs50.h>
#include <stdio.h>

int main(void)
{
  char answer = get_char("Do you agree? ");

  if (answer == 'y')
  {
    printf("Agreed.\n");
  }
  else if (answer == 'n')
  {
    printf("Not agreed.\n");
  }
}