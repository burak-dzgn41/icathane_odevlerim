#include <stdio.h>

int main() {
  int i;
  
  i = 0;
  printf("%d\n", i);
  printf("%d\n", i++); 
  printf("%d\n", i);  
  printf("%d\n", ++i); 
  printf("%d\n", i);

  return 0;
}