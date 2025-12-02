//103) WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.
#define big(a,b) ((a)>(b)?a:b)
#include <stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("the biggest number is: %d",big(num1,num2));
    return 0;
}