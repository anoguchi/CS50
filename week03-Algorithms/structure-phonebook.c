#include "cs50.h"
#include <stdio.h>
#include <string.h>

typedef struct
{
  string name;
  string number;
} person;

int main(void)
{

  person people[3];

  people[0].name = "Beto";
  people[0].number = "+55-11-98121-7657";

  people[1].name = "Julia";
  people[1].number = "+55-11-97463-1004";

  people[2].name = "Alberto";
  people[2].number = "+55-11-99617-4553";

  string name = get_string("Name: ");

  for (int i = 0; i < 3; i++)
  {
    if (strcmp(people[i].name, name) == 0)
    {
      printf("Found: %s %s\n", people[i].name, people[i].number);
      return 0;
    }
  }

  printf("Not found!");
  return 1;
}