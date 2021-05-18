#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main (void) {

  FILE *fptr ;
  int code, i= 0;
  char name[30];
  float salary;

  if((fptr = fopen("write_binary.txt", "wb")) == NULL) {
    printf("not found the file !");
    exit(1);
  }

  do {
    printf("embloay number : %d \n", i+1);
    printf("\t enter code :");
    scanf("%d", &code);
    if(code == 0) break;
    printf("\t enter salary :");
    scanf("%f", &salary);
    printf("\t enter name :");
    fflush(stdin);
    gets(name);

    printf("\n");
    fwrite(&code, sizeof(code), 1, fptr);
    fwrite(name, sizeof(name), 1, fptr);
    fwrite(&salary, sizeof(salary), 1, fptr);
    i++;

  } while (1);
  fclose(fptr);

}