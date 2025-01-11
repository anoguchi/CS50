#include <stdio.h>
#include "cs50.h"
#include <stdint.h>

int main(int argc, string argv[])
{
  string filename = argv[1];

  FILE *f = fopen(filename, "r");
  // read 8bits or 1byte at time
  int size = 4;
  uint8_t buffer[size];

  fread(buffer, 1, size, f);

  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    printf("%i\n", buffer[i]);
    sum = sum + buffer[i];
  }
  printf("%i\n", sum);

  if (sum != 255)
  {
    printf("Not a pdf.");
    return 1;
  }
  printf("It's a pdf!");
  fclose(f);
  return 0;
}