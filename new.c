#include <stdio.h>
#include <string.h>//just to take inputs and print output of strings


int slen(char *s)
{
    int len=0;
    int i =0;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}

void copy(char *d, char*s)
{
    int i = 0;
    while(s[i]!='\0')
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

void con(char *d , char*s){
    int i = 0 ;
    int j = slen(d);
    while(s[i]!='\0')
    {
        d[j] = s[i];
        j++;i++;
    }
    d[j] = '\0';
}

void rev(char *s)
{
    int len = slen(s);
    for(int i = 0 ; i <= len/2 ; i++)
    {
        char temp;
        s[i] = temp;
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
}

int main()
{
    char str1[1000];
    char str2[1000];
    printf("enter the first string: \n");
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    printf("enter the second string:\n");
    fgets(str2,1000,stdin);
    char askop;
    printf("enter x to copy , a to concatenate , r to perform reverse operation:\n");
    askop = getchar();
    switch((askop))
    {
        case 'x':copy(str1,str2);
                 puts(str1);
                 break;
        case 'a':con(str1,str2);
                 puts(str1);
                 break;
        case 'r':printf("enter 1 for reversing str1 or enter 2 for reversing str2\n");
                 getchar();
                 if(getchar()=='1') rev(str1);
                  else rev(str2);
                  break; 
    }
    return 0;
}