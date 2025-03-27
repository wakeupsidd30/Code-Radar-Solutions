#include <stdio.h>
#include <string.h>

// Function to encrypt the message using Caesar Cipher
void caesarCipher(char *message, int shift) {
    // Normalize the shift value to be within 0-25
    shift = shift % 26;
    
    for (int i = 0; message[i] != '\0'; i++) {
        char currentChar = message[i];

        // Encrypt uppercase letters
        if (currentChar >= 'A' && currentChar <= 'Z') {
            message[i] = (currentChar - 'A' + shift) % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if (currentChar >= 'a' && currentChar <= 'z') {
            message[i] = (currentChar - 'a' + shift) % 26 + 'a';
        }
        // Non-alphabetic characters remain unchanged
    }
}

