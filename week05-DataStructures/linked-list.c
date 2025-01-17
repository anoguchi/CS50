#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
} node;

int main(int argc, char *argv[])
{
  node *list = NULL;

  for (int i = 1; i < argc; i++)
  {
    // convert string to number
    int number = atoi(argv[i]);

    node *n = malloc(sizeof(node));

    if (n == NULL)
    {
      // free memory thus far
      return 1;
    }

    n->number = number;
    n->next = NULL;

    n->next = list;
    list = n;
  }

  // print whole list
  node *ptr = list;
  while (ptr != NULL)
  {
    printf("%i", ptr->number);
    ptr = ptr->next;
  }
}