#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char *s;
  // NOTE: malloc probably separates the memory asked for and initialize
  // it as null values for the type.
  /* s = malloc(1024 * sizeof(char)); */
  s = calloc(1024, sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);

  int i = 0;
  while (s[i] != 0) {
    if (s[i] == ' ') printf("\n");
    else printf("%c", s[i]);
    i++;
  }

  return 0;
}
