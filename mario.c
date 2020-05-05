#include <stdio.h>
#include <cs50.h>

void printHash(int l);

int main(void){

    //user to input number of levels
    int levels = -1;
    do {
        levels = get_int("Enter the number of Levels: ");
    } while (levels > 8 || levels < 1);

    //calculate base length
    int baseLength;
    int spaces;

    for (int l = 1; l <= levels; l++){
        spaces = levels - l;
        //print string
        for (int s = 0; s < spaces; s++){
            printf(" ");
        }

        //print # marks
        printHash(l);

        //print <space>
        printf(" ");

        //print # marks
        printHash(l);

        printf("\n");


    }



}

void printHash(int l){
     for (int h = 0; h < l; h++){
            printf("#");
        }
}