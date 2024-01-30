#include <stdio.h>

//Print headers on the result

int main()
{
    int fahr;

#define LOWER 0
#define UPPER 300
#define STEP 20
    
    printf("FAHRENHEIT\tCELSIUS\n");
    for (fahr = LOWER; fahr <= 300; fahr = fahr + STEP)
    {
        printf("%3.0f\t\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    return 0;
}
