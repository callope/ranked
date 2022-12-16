#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
  int max_and=0, max_or=0, max_xor=0;
  int tmp=0;

  for (int b=1; b <= n; b++) {
    for (int a=1; a < b; a++) {
      tmp = a&b;
      if ((tmp < k) && (tmp > max_and))
        max_and = tmp;

      tmp = a|b;
      if ((tmp < k) && (tmp > max_or))
        max_or = tmp;

      tmp = a^b;
      if ((tmp < k) && (tmp > max_xor))
        max_xor = tmp;
    }
  }

  printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);

  return 0;
}
