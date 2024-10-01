#include <stdio.h>
#include "readfile.h"

int print(char fn[]){
  FILE *fp;
  char c;
  fp = fopen(fn, "r");
  if(fp==NULL) return -1;

  while( (c = getc(fp)) != EOF ) {
    printf("%c", c);
  }
  
  printf("\n");

  fclose(fp);
  return 0;
}

