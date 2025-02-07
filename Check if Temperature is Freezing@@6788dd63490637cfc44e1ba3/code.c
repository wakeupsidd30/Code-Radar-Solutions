#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);
    if (num1<=0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }
    
    return 0;
}