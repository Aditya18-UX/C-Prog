#include <stdio.h>

int main()
{
    float f, c;

    printf("Fahrenheit\tCelsius\n");

    for (f = 0; f <= 300; f = f + 20)
    {
        c = (5.0 / 9.0) * (f - 32);
        printf("%.0f\t\t%.2f\n", f, c);
    }

    return 0;
}