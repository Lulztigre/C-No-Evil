#include <stdio.h>

int main() 
{
    int currentChar, lastCharWasBlank = 0;

    while ((currentChar = getchar()) != EOF) 
    {
        if (currentChar == ' ') 
        {
            if (!lastCharWasBlank) 
            {
                putchar(currentChar);
                lastCharWasBlank = 1; 
            }
        } 
        else 
        {
            putchar(currentChar);
            lastCharWasBlank = 0;
        }
    }

    return 0;
}
