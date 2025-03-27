#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void deflateBalloons(int balloons[], int n) {
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

