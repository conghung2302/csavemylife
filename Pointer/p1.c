#include <stdio.h>

int main(int argc, char *argv[]) { 
  int a = 10;
  int b = 20;
  
  int *ptr;
  ptr = &a;

  *ptr = 23;

  printf("%p \n", ptr);
  printf("%p \n", &ptr);
  printf("%p \n", &a);
  


  return 0;
}
