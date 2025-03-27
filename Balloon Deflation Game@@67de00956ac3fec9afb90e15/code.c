#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void balloon_deflation_game(int balloons[], int n) {
    // Sort the balloons array
    qsort(balloons, n, sizeof(int), compare);

    int prev_sub = 0;
    int count = n; // Total number of balloons

    // Iterate through the sorted balloons
    for (int i = 0; i < n; i++) {
        // Only consider balloons that still have air left
        if (balloons[i] > prev_sub) {
            // Calculate the current minimum air to release
            int current_min = balloons[i] - prev_sub;
            printf("%d\n", count); // Print the number of remaining balloons
            prev_sub += current_min; // Update the total air released
        }
        count--; // Decrease the count of remaining balloons
    }
}

int main() {
    int balloons[] = {5, 4, 6, 3};
    int n = sizeof(balloons) / sizeof(balloons[0]);

    printf("Number of balloons with air at the beginning of each round:\n");
    balloon_deflation_game(balloons, n);

    return 0;
}
