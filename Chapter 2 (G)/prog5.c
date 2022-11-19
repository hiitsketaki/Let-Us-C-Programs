/*
Program to recieve cartesian coordinates(x,y) of a point and convert them into polar coordinates(r,theta)
Hint: r=sqrt(x,y)
theta=tan^-1(y/x)
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,r,theta;
    printf("Enter x and y coordinates: ");
    scanf("%f %f", &x, &y);

    r=sqrt(x*x+y*y);
    theta=atan2(y,x); /* atan2 function takes 2 arguements and calculates the value in radians */
    theta=theta*180/3.14; /* convert into degrees */
    printf("r=%.2f , theta=%.2f\n",r,theta);

    return 0;
}