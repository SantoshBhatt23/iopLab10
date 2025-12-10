#include <stdio.h>
int main()
{
    int a =5;
    printf("the value in variable a: %d\n",a);
    int *b = &a;
    *b = 10;
    printf("after modification the value in variable a: %d\n",a);
    return 0;
}