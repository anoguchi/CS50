#include <stdio.h>
#include <string.h>

int main(void)
{
  int max = 50;
  char input[max];

  printf("Input:  ");
  fgets(input, max, stdin);
  printf("Output: ");

  /* mais eficiente do que i < strlen(input) porque agora você está
     chamando strlen na parte de inicialização do loop for,
     não está dentro da expressão booleana que é verificada e executada
     de novo e de novo. */
  for (int i = 0, n = strlen(input); i < n; i++)
  {
    printf("%c", input[i]);
  }

  return 0;
}