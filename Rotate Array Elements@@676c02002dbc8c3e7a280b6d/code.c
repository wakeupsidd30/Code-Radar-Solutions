#include <stdio.h>

int main() {
    int N, K;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &K);
    K = K % N;

    
    for (int r = 0; r < K; r++) {
        int last = arr[N - 1];
        for (int i = N - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
