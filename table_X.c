#include <stdio.h> 

void main (void) {
  int i,j, n = 12;
  printf("\n");
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n ; j++) 
      printf("%d * %d = %d \t", i, j, i*j);
    printf("\n \n");
  }
}