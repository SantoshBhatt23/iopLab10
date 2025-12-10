//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int flip(int num , int n)
{
    char snum[20];
    sprintf(snum,"%d",num);
    int start = strlen(snum) - n;
    int end = strlen(snum)-1;
    while(end>start)
    {
        char temp;
        temp = snum[start];
        snum[start] = snum[end];
        snum[end] = temp;
        start++;
        end--;
    }
    return atoi(snum);
}
int main()
{
   printf("%d\n",flip(123456,4));
}