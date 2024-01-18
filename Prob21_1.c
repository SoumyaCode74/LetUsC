#include "Prob21_1.h"

int bitValue(int, unsigned int);
char * colors[] = {"Violet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Red"};

int main(void){
    int color = 0;
    printf("Enter your color choice: \n");
    scanf("%d", &color);
    for(int i = 0; i < sizeof(colors)/sizeof(colors[0]); i++){
        if (bitValue(color, i)){
            printf("%s present!\n", colors[i]);
        }
    }
}

/* Function that returns 0 or 1 depends on which bit of the number is 0 or 1*/
int bitValue(int num, unsigned int bit){
    return _BV(num, bit);
}