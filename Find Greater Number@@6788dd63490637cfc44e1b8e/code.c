#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1>num2) {
        printf("num1>num2");
    } else {
        printf("num2>num1");
    }
 
    return 0;
}