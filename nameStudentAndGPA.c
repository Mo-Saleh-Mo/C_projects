#include <stdio.h> 

void main (void) {
  char name[30];
  int i, numsTerm;
  float gpa, sum;

  printf("enter your name : ");
  gets(name);
  printf("enter your number term : ");
  scanf("%d", &numsTerm);

  for (i = 1; i <= numsTerm; i++) {
    printf("enter your degree the term %d : ", i);
    scanf("%f", &gpa);
    sum += gpa;
  }
  printf("\nyour name is : %s\n", name);
  printf("your GPA is : %5.2f \n", (sum/numsTerm));
}