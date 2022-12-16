#include <stdio.h>
/* #include <string.h> */
/* #include <math.h> */
/* #include <stdlib.h> */

/* int main() { */
/*     int n; */
/*     scanf("%d", &n); */

/*     for (int i = -(n-1); i <= (n-1); i++){ */
/*         for (int j = -(n-1); j <= (n-1); j++){ */
/*             if (abs(i)==abs(j)) { */
/*                 printf("%i ",abs(i)+1); */
/*             } else if (abs(i) > abs(j)) { */
/*                 printf("%i ",abs(i)+1); */
/*             } else if (abs(i) < abs(j)) { */
/*                 printf("%i ",abs(j)+1); */
/*             } else { */
/*                 printf("%i ",n); */
/*             } */

/*         } */
/*         printf("\n"); */
/*     } */
/*     return 0; */
/* } */

int main()
{
    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0; i < len ; i++) {
        for(int j=0; j < len; j++) {
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
