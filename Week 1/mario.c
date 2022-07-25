#include <cs50.h>
#include <stdio.h>

int main(void){
    int height;
    
    do {
        height = get_int("Height: ");
    }
    while(height > 8 || height < 1);
    
    for (int i = 1; i <= height; i++) {
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
