#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){

  // String str2 = "hellostring"; Something like this does not exist in C

  char str1[] = "str1";
  char* str2 = "str2";
  char str3[5] = {'s','t','r','3','\0'};


  printf("%s\n", str1);
  printf("%s\n", str2);

  printf("\n");

  printf("%s\n", str3);

  printf("len(str3): %lu\n", strlen(str3));
  printf("sizeof(str3): %lu\n", sizeof(str3));

  str3[2] = '\0';

  printf("\n");
  printf("%s\n", str3);
  printf("len(str3): %lu\n", strlen(str3));
  printf("len(str3): %lu\n", sizeof(str3));

  return 0;
}