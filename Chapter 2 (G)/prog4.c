/*program to calculate the sum of digits of a 5 digit number*/
#include <stdio.h>

int main()
{
    int num, a, n;
    int sum=0;
    printf("Enter the 5 digit number: ");
    scanf("%d", &num);
    a=num%10; /*5th digit as remainder*/
    n=num/10;
    sum+=a;
    a=n%10; /*4th digit*/
    n=n/10;
    sum+=a;
    a=n%10; /*3rd digit*/
    n=n/10;
    sum+=a;
    a=n%10; /*2nd digit*/
    n=n/10;
    sum+=a;
    a=n%10; /*1st digit*/
    sum+=a;

    printf("The sum of 5 digits of the number %d is %d\n", num, sum);

    return 0;
}