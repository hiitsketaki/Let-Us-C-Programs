/*
Program to input value of an angle and print all its trigonometric ratios
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float angle, s, c, t;
    printf("Enter an angle: ");
    scanf("%f", &angle);

    angle = angle*3.14/180;
    //to convert angle into radians

    s=sin(angle);
    c=cos(angle);
    t=tan(angle);

    printf("sin=%.2f\ncos=%.2f\ntan=%.2f\n", s,c,t);

    return 0;
}