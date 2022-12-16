#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


// will do the operations specified by the
// conditionals given a interval.
int main()
{
  char* options[9] = {
    "one", "two", "three",
    "four", "five", "six",
    "seven", "eight", "nine"
  };
  int a, b;
  scanf("%d\n%d", &a, &b);

  // just adjust the interval if it was inserted inverted.
  if ( a > b ) {
    int tmp = a;
    a = b;
    b = tmp;
  }

  for (int n=a; (a <= n) && (n <= b); n++) {
    if (n <= 9) {
      printf("%s\n", options[n-1]);
      continue;
    }

    (n % 2 == 0) ? printf("even\n") : printf("odd\n");
  }

  return 0;
}
