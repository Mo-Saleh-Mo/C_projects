#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {

  FILE *fptr ;
  int code ;
  char name[30], fileName[100];
  float salary ;
  
  printf("please enter file name: ");
  gets(fileName);

  if((fptr = fopen(fileName, "r")) == NULL) {
    printf("not found the file \n"); 
    exit(1);
  }

  while(fscanf(fptr, "%d", &code) != EOF) {
    fgets(name, 30, fptr);
    fscanf(fptr, "%f", &salary);
    printf("code: %5d name: %30s salary: %7.2f \n", code, name, salary);
    printf("\n");
  }

  fclose(fptr);

}