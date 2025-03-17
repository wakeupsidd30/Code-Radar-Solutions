#include <stdio.h>

int main() {
    int N;
    
    // Taking input from user
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop to print the pattern
    for (int i = N; i > 0; i--) {  // Outer loop controls rows
        for (int j = 0; j < i; j++) {  // Inner loop controls stars
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
