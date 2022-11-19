#include <stdio.h>

int main()
{
    float fr, cg;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fr);
    cg = 5.0/9.0 * (fr - 32);
    printf("The temperature in centigrade is: %.2f", cg);

    return 0;
}