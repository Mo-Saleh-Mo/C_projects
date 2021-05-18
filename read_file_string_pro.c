#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int nums, char *argv[]) {
  FILE *ftpr_read;
  FILE *ftpr_write;
  char line[81];
  char nameFile[150];

  printf("enter file name please: ");

  gets(nameFile);
  if ((ftpr_read = fopen(nameFile, "r")) == NULL) {
    printf("cant be open the file");
    exit(1);
  }
  while (fgets(line, 80, ftpr_read) != NULL) {
    printf("%s \n", line);
  }

  printf("do you want copy the file ? \n");
  printf("if you want to copy enter the key 'Y' or not enter the key 'N' : ");

  if ( getche() == 'y' || 'Y') {
    printf("\nenter dir: ");
    fflush(stdin);
    gets(*argv);
    if(nums != 2) {
      printf("dir is false");
      exit(1);
    } else {
      ftpr_write = fopen(argv[2], "w");
      while (strlen(gets(line)) > 0) {
        fputs(line, ftpr_write);
        fputs("\n", ftpr_write);
      }
    }
  }
  else
    return 0;

  fclose(ftpr_read);
  fclose(ftpr_write);
}