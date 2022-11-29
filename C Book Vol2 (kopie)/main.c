#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    printf("Fahrenheit to celsius\ncoversion table:\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%f3.0\t%f6.1\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("Celsius to fahrenhreit\ncoversion table:\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%f3\t%f6.1\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}    

