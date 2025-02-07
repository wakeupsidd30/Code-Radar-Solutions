#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+': 
            printf("%d\n", a + b); 
            break; // Essential to exit the 'case +' block

        case '-': 
            printf("%d\n", a - b); 
            break; // Essential to exit the 'case -' block

        case '*': 
            printf("%d\n", a * b); 
            break; // Essential to exit the 'case *' block

        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", a / b);
            }
            break; // Essential to exit the 'case /' block

        default: 
            printf("Error: Invalid operator\n");
    }

    return 0;
}