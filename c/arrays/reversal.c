#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int n = 0;
  scanf("%d", &n);

  int *array = (int*) malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < n/2; i++) {
    swap(&array[i], &array[n-i-1]);
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  free(array);
  return 0;
}
