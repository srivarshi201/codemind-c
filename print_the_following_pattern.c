#include <stdio.h>
int main() {
   int i, j, r;

   scanf("%d", &r);
   for (i = r; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d", j);
      }
      printf("
");
   }
   return 0;
}