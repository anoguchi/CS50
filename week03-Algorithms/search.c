#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[50];
  int votes;
} candidate;

int main(void)
{
  const int num_candidate = 3;
  candidate candidates[num_candidate];

  strcpy(candidates[0].name, "Alberto");
  candidates[0].votes = 10;

  strcpy(candidates[1].name, "Julia");
  candidates[1].votes = 12;

  strcpy(candidates[2].name, "Beto");
  candidates[2].votes = 7;

  int highest_votes = 0;
  for (int i = 0; i < num_candidate; i++)
  {
    if (candidates[i].votes > highest_votes)
    {
      highest_votes = candidates[i].votes;
    }
  }
  printf("Highest votes: %i\n", highest_votes);

  for (int i = 0; i < num_candidate; i++)
  {
    if (candidates[i].votes == highest_votes)
    {
      printf("%s\n", candidates[i].name);
    }
  }
}