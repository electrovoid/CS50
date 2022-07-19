#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    if(argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    for(int key = 0; key < strlen(argv[1]); key++){
        if(isalpha(argv[1][key])) {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);
    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    
    for(int i = 0; i < strlen(text); i++) {
        if(!isalpha(text[i])){
            printf("%c", text[i]);
            continue;
        }
        int offset = isupper(text[i]) ? 65 : 97;
        int pi = text[i] - offset;
        int ci = (pi + key) % 26;
        
        printf("%c", ci + offset);
    }
    
    printf("\n");
    return 0;
}
