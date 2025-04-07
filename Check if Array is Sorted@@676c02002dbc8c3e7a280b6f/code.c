#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isSorted = 1; // Assume it's sorted

    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = 0;
            break;
        }
    }

    if (isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
