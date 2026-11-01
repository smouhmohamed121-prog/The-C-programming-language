#include <stdio.h>

int main(void){
    /* Opning a file */
    char file_name [20];
    printf ("Enter a file name : ");
    scanf("%s",&file_name);
    if (freopen(file_name, "r", stdin) == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    /* a program to count blanks,tabs,and newlines*/
    int c,blanks,tabs,newlines;
    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF){ 
        if (c == ' ') ++blanks;
        if (c == '\t') ++tabs;
        if (c == '\n') ++newlines;
    }
    printf("\nBlanks : %d\nTabs : %d\nNew lines : %d",blanks,tabs,newlines);

return 0;}
