#include "cs50.h"
#include <stdio.h>

void draw(int n);

int main(void)
{
  int height = get_int("Height: ");
  draw(height);
}

void draw(int n)
{
  // If nothing to draw

  /* Então este é o chamado caso base.
  Isso é análogo a dizer, tipo, se John Harvard não estiver na lista telefônica
  ou se não houver mais armários ou portas, basta sair ou retornar neste caso. */

  if (n <= 0)
  {
    return;
  }

  // print pyramid of height n - 1
  draw(n - 1);

  // print one more row
  for (int i = 0; i < n; i++)
  {
    printf("#");
  }
  printf("\n");
}