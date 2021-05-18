#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fptr;
  int code ;
  int i =0 ;
  float salary;
  char name[30];

  if((fptr = fopen("format_emploay.txt", "w")) == NULL) {
    printf("file name not found !");
    exit(1);
  }

  do {
    printf("emploay number :%d \n", i+1);
    printf("\t please enter code: ");
    scanf("%d", &code);
    if(code == 0) break ;
    printf("\t please enter salary: ");
    scanf("%f", &salary);
    fflush(stdin);
    printf("\t please enter name: ");
    gets(name);
    fprintf(fptr, "%d => \n", i+1);
    fprintf(fptr, "\t code: %-5d, salary: %-7.2f, name: %-s ; \n", code, salary, name);
    printf("\n");
    i++;
  } while (1);
  fclose(fptr);
}