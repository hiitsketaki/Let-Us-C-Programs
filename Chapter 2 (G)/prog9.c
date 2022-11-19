/*
Two numbers are input through the keyboard at two different locations C and D.
Program to interchange C and D.
*/

#include <stdio.h>

int main()
{
    int c, d;
    printf("\nEnter the number at location C: ");
    scanf("%d", &c);
    printf("\nEnter the number at location D: ");
    scanf("%d", &d);

    /* using third variable: declare e
    e=c;
    c=d;
    d=e;
    */

   c=c+d;
   d=c-d;
   c=c-d;


    printf("\nNumber at location C after changed: %d", c);
    printf("\nNumber at location D after changed: %d", d);

    return 0;
}