#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string word);

int main(void) {
    string word1, word2;
    
    word1 = get_string("Player 1: ");
    word2 = get_string("Player 2: ");
    
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    
    if(score1 > score2) {
        printf("Player 1 wins!\n");
    }
    else if(score1 < score2) {
        printf("Player 2 wins!\n");
    }
    else {
        printf("Tie!\n");
    }
    return 0;
}

int compute_score(string word) {
    int sum = 0;
    int k;
    for(int i = 0; i < strlen(word); i++) {
        if(isupper(word[i])) {
            k = word[i] - 65;
            k = points[k];
        }
        else if(islower(word[i])) {
            k = word[i] - 97;
            k = points[k];
        }
        else {
            k = 0;
        }
        sum = sum + k;
    }
    return sum;
}
