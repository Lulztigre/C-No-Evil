#include <stdio.h>

int main()
{
    int c;

    if ((c = getchar()) != EOF)
    {
        printf("EOF is not reached, getchar() returned a character\n");
    }
    else
    {
        printf("EOF is reached, getchar() returned EOF\n");
    }

    return 0;
}
