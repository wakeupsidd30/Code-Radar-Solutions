#include <stdio.h>

// Function to remove duplicates from the ranked array
int removeDuplicates(int ranked[], int n, int uniqueRanks[]) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            uniqueRanks[j++] = ranked[i];
        }
    }
    return j; // New size of uniqueRanks
}

// Function to find player's rank after each game
void climbingLeaderboard(int ranked[], int n, int player[], int m) {
    int uniqueRanks[n];  
    int newSize = removeDuplicates(ranked, n, uniqueRanks);
    
    int result[m];  
    int index = newSize - 1;  // Start from the lowest rank

    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= uniqueRanks[index]) {
            index--;  // Move up the rank if the player's score is higher
        }
        result[i] = index + 2;  // Rank is (index + 2)
    }

    // Print results
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }
}

// Driver Code
int main() {
    int ranked[] = {100, 90, 90, 80, 75, 60};
    int player[] = {50, 65, 77, 90, 102};
    
    int n = sizeof(ranked) / sizeof(ranked[0]);
    int m = sizeof(player) / sizeof(player[0]);

    climbingLeaderboard(ranked, n, player, m);

    return 0;
}
