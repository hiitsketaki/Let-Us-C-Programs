/*
Calculate perimeter and area of a rectangle and a circle
*/
#include <stdio.h>
#define pi 3.1415

int main()
{
    int l, b, r, perimeter, area_r;
    float area_c, circ;
    printf("Enter the length and breadth of the rectangle: \n");
    scanf("%d\n%d", &l, &b);
    perimeter = 2*(l+b);
    area_r = l*b;
    printf("The perimeter of the rectangle is: %d", perimeter);
    printf("\nThe area of the rectangle is: %d", area_r);

    printf("\nEnter the radius of circle: ");
    scanf("%d", &r);
    area_c = pi*r*r;
    circ = 2*pi*r;
    printf("The circumference of the circle is: %.2f", circ);
    printf("\nThe area of the circle is: %.2f", area_c);

    return 0;
}
