// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main()
{
    int c, nl, blank, tabs;
    
    nl = 0;
    blank = 0;
    tabs = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++blank;
        else if (c == '\t')
            ++tabs;
    }
    printf("Newlines is: %d\nTABS is: %d\nBlank shots are: %d\n", nl, tabs, blank);
    return 0;
}
