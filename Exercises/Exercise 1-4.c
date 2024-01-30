// Celsius to Fahrenheit
#include <stdio.h>

int main()
{
    double fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%6.1f\t\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}
