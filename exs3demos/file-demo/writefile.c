#include <stdio.h>
#include "readfile.h"


int main(int argc, char** argv){
  print("read.txt");


  FILE *fp;
  fp = fopen("write.txt", "w"); //w for writemode
  if(fp==NULL) return -1;

  char name[256];

  printf("Name: ");
  fgets(name, 256, stdin);

  if( (fputs(name, fp)) < 0) return -1;
  
  fclose(fp);

  print("write.txt");

  return 0;
}