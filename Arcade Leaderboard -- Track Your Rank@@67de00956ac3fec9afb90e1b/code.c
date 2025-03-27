#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); // Sort in descending order
}

void trackPlayerRanks(int leaderboard[], int leaderboardSize, int alice_scores[], int aliceSize, int ranks[]) {
    // Step 1: Create an array for unique scores
    int *uniqueScores = (int *)malloc(leaderboardSize * sizeof(int));
    int uniqueCount = 0;

    // Step 2: Extract unique scores
    for (int i = 0; i < leaderboardSize; i++) {
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            uniqueScores[uniqueCount++] = leaderboard[i];
        }
    }

    // Step 3: Calculate ranks for Alice's scores
    for (int i = 0; i < aliceSize; i++) {
        // Binary search for the rank
        int low = 0, high = uniqueCount - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (uniqueScores[mid] > alice_scores[i]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        // Rank is the number of scores greater than Alice's score + 1
        ranks[i] = low + 1;
    }

    // Free allocated memory
    free(uniqueScores);
}