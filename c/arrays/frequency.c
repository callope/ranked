#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 1000

int main()
{
  char *input = calloc(MAX_INPUT, sizeof(char));
  int  *values = calloc(10, sizeof(int));

  if ((input == NULL) || (values == NULL)) {
    printf("couldn't allocate memory, closing...");
    return 1;
  }

  fgets(input, MAX_INPUT, stdin);

  // TODO: IMPLEMENT THIS
  int current = 0;
  for (int i = 0; i < MAX_INPUT; i++) {
    current = atoi(&input[i]);
    printf("%d\n", current);
    /* if ((current == 0) && (input[i] == '0')) */
    /*   values[0]++; */

    /* switch (current) { */
    /*   case 1 ... 9: */
    /*     ++values[current]; */
    /*     break; */
    /* } */
  }

  /* for (int i = 0; i < 10; i++) */
  /*   printf("%d ", values[i]); */

  /* free(input); */
  return 0;
}
