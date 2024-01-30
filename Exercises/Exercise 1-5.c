// Farhenheit to Celsius (print output in reverse)

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = upper; // set upper limit
    
    while (celsius >= lower) // set a condition that stops when celsius 0;
    {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%6.2f\t%6.0f\n", fahr, celsius);
        celsius = celsius - step; // decrement the step
    }
    return 0;
}
