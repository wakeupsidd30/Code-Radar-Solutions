#include <stdio.h>


int main() {
  int num1, num2;

  
  scanf("%d %d", &num1, &num2);

 
  bool isLessThan = num1 < num2;

  
  if (isLessThan) {
    printf("True\n");
  } else {
    printf("False\n");
  }
  return 0;
}