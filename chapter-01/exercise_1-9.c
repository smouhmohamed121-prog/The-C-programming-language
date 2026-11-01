#include <stdio.h>

int main(void){

    /*Write a program to copy its input to its output, replacing
    each string of one or more blanks by a single blank.*/
    int c ,i;

    i = 0;
    printf ("Enter an input : ");
    while ((c= getchar()) != '\n'){ // Esc key
        if (c != ' '){
            printf ("%c",c);
            i = 0;
        }
        else {
            if (i == 0) printf(" ");
            i = 1;
        }
    }

return 0;}



