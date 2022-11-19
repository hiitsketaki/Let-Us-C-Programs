/*
Program to receive values of latitude(L1,L2) and longitude(G1,G2) in degrees
of two places on the earth
and output the distance D between them in nautical miles.
Formula for nautical miles is:
D=3963cos^-1(sinL1sinL2 + cosL1cosL2 * cos(G1-G2))
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float l1,l2,g1,g2,d;
    printf("Enter the values of latitude and longitude of place 1: ");
    scanf("%f %f", &l1, &g1);
    printf("Enter the values of latitude and longitude of place 2: ");
    scanf("%f %f", &l2, &g2);

    l1=l1*3.14/180;
    l2=l2*3.14/180;
    g1=g1*3.14/180;
    g2=g2*3.14/180;
    //to convert it from degree to radian

    d=3963 * acos(sin(l1)*sin(l2) + cos(l1)*cos(l2) * cos(g1-g2));

    printf("Distance between the two places in nautical miles is: %.2f", d);

    return 0;
}