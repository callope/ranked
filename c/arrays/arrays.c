#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, sum=0;

  scanf("%d", &n);
  int* array = (int*) malloc(n * sizeof(int));

  for (int i=0; i < n; i++) {
    scanf("%d", &array[i]);
    sum += array[i]; // the problem here is that when i was doing this operation i did not initialized
                     // the variable, so i was getting a buffer overflow
  }

  printf("%d", sum);
  free(array);
  return 0;
}
