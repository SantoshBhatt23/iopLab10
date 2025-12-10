//program to count no of words , characters and no of lines in a given text file.
#include <stdio.h>
#include <ctype.h>

int cCount(FILE * fptr)
{
    char ch;
    int count=0;
    while((ch = getc(fptr))!=EOF){
        if(ch !='\n' && !(isspace(ch)))
        {
            count++;
        }
    }
    return count;
}

int lCount(FILE* fptr)
{
    char ch;
    int count=0;
    while((ch = getc(fptr))!=EOF)
    {
        if(ch=='\n') count++;
    }
    return count+1;
}

int wCount(FILE*fptr)
{
    char ch;
    int count = 0;
    while((ch = getc(fptr))!=EOF)
    {
        switch(ch)
        {
            case ' ':
            case ',':
            case '.':
            case '?':
            case '!':count++;
        }
    }
    return count;
}

int main()
{
    FILE * fptr = fopen("sample2.txt","r");
    printf("number of lines: %d",lCount(fptr));
    fclose(fptr);
    fptr = fopen("sample2.txt","r");
    printf("\nNumber of Characters: %d\n",cCount(fptr));
    fclose(fptr);
    fptr = fopen("sample2.txt","r");
    printf("Number of words: %d",wCount(fptr));
    fclose(fptr);
    return 0;
}