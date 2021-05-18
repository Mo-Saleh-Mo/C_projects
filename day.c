#include <stdio.h> 

void main (void) {
  int n, i;

  printf("\nEnter the day : ");
  scanf("%d", &n);

  switch (n) {
  case 0:
    printf("You mean last week ?\n"); break;
  case 1 : 
    printf("the number day =  Monday\n"); break;
  case 2:
    printf("the number day =  Tuesday\n"); break;
  case 3:
    printf("the number day =   Wednesday\n"); break;
  case 4:
    printf("the number day =  Thrusday\n"); break;
  case 5:
    printf("the number day =  Fraiday\n"); break;
  case 6:
    printf("the number day =  Sterday\n"); break;
  case 7:
    printf("the number day =  Sunday\n"); break;
  default: 
    printf("You mean next week ? \n"); break;
  }
}