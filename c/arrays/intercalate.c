#include <stdio.h>
#include <stdlib.h>

// intercala arrays com tamanhos iguais
// TODO: implementar diferença de tamanho (pra simplesmente não continuar
// a intercalar e só jogar os itens que nem o exercício manda.)
int* intercalar(int n1, int n2, int* a, int* b) {
  int* intercalada = calloc(n1 + n2, sizeof(int));

  int j = 0;
  for (int i = 0; i <= n1+n2; i += 2) {
    intercalada[i] = a[j];
    intercalada[i+1] = b[j];

    j++;
  }

  return intercalada;
}

int main() {
  int n1 = 2; int n2 = 2;
  int* a = calloc(n1, sizeof(int));
  int* b = calloc(n2, sizeof(int));

  a[0] = 1; a[1] = 3;
  b[0] = 2; b[1] = 4;

  int* i = intercalar(n1, n2, a, b);
  for (int n = 0; n < n1+n2; n++) {
    printf("%d ", i[n]);
  }

  free(a);
  free(b);
  free(i);
  return 0;
}
