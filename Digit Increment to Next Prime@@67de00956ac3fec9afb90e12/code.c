#include <stdio.h>

int nextPrimeDigit(int digit) {
    // Return the next prime digit for the given digit
    switch (digit) {
        case 0: return 2;
        case 1: return 2;
        case 2: return 2;
        case 3: return 3;
        case 4: return 5;
        case 5: return 5;
        case 6: return 7;
        case 7: return 7;
        case 8: return 2; // Wrap around
        case 9: return 2; // Wrap around
        default: return digit; // Should not reach here
    }
}

int incrementToNextPrime(int N) {
    int result = 0;
    int multiplier = 1;

    while (N > 0) {
        int digit = N % 10; // Extract the last digit
        int primeDigit = nextPrimeDigit(digit); // Get the next prime digit
        result += primeDigit * multiplier; // Build the new number
        multiplier *= 10; // Move to the next place value
        N /= 10; // Remove the last digit
    }

    return result;
}


