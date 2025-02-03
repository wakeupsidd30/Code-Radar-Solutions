#include <stdio.h>

int isGreaterThan(int num1, int num2) {
  if (num1 > num2) {
    return 1; // True
  } else {
    return 0; // False
  }
}

int main() {
  int num1, num2;

  // Read two space-separated integers from the input
  scanf("%d %d", &num1, &num2);

  // Check if num1 is greater than num2 using the isGreaterThan function
  if (isGreaterThan(num1, num2)) {
    printf("True\n"); // Print "True" if the condition is true
  } else {
    printf("False\n"); // Print "False" otherwise
  }

  return 0;
}