#include <stdio.h>

void update(int *a,int *b) {
  // if you do the update operation directly the value of the second
  // operation will be affected (because we are modifying the value of
  // a variable involved in the second operation), so we create a temporary
  // variable.
  int t = *a;
  *a = t + *b;
  *b = (t-*b < 0) ? -1 * (t - *b) : t - *b;
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
