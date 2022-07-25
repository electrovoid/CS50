#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    string str;
    int letters = 0;
    int words = 1;
    int sentences = 0;
    
    str = get_string("Text: ");
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            sentences++;
        }
        else if (str[i] == ' ') {
            words++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letters++;
        }
    }
    
    float L = (float) (letters*100)/words;
    float S = (float) (sentences*100)/words;
    
    float index = 0.0588*L - 0.296*S - 15.8;
    
    if (index < 1) {
        printf("Before Grade 1\n");
    }
    else if (index > 16) {
        printf("Grade 16+\n");
    }
    else {
        printf("Grade %i\n", (int) round(index));
    }
    
    return 0;
}
