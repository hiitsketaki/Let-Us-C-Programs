/*
wind chill temperature is always lower than the air temperature.
wcf = 35.74 + 0.6215t + (0.4275t - 35.75)*v^0.16
here t is temperature and v is wind velocity
Program to receive t and v and calculate wind chill factor
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float t, v, wcf;
    printf("Enter the temperature and wind velocity: ");
    scanf("%f %f", &t, &v);

    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
    printf("Wind Chill Factor is: %.2f", wcf);

    return 0;
}