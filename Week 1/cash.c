#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float dollars;
    int count = 0;
    
    do {
        dollars = get_float("Change owed: ");
    }
    while(dollars < 0);
    
    int cents = round(dollars*100);
    
    while(cents > 0) {
        if(cents >= 25) {
            cents = cents-25;
            count++;
        }
        else if(cents >= 10 && cents < 25) {
            cents = cents-10;
            count++;
        }
        else if(cents >= 5 && cents < 10) {
            cents = cents-5;
            count++;
        }
        else if(cents >= 1 && cents < 5) {
            cents = cents-1;
            count++;
        }
    }
    
    printf("%i\n", count);
}
