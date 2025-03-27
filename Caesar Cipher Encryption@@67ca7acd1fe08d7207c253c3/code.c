#include <stdio.h>
#include <string.h>


void caesarCipher(char *message, int shift) {
   
    shift = shift % 26;
    
    for (int i = 0; message[i] != '\0'; i++) {
        char currentChar = message[i];

        
        if (currentChar >= 'A' && currentChar <= 'Z') {
            message[i] = (currentChar - 'A' + shift) % 26 + 'A';
        }
       
        else if (currentChar >= 'a' && currentChar <= 'z') {
            message[i] = (currentChar - 'a' + shift) % 26 + 'a';
        }
        
    }
}

