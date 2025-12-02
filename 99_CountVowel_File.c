//99.to count the total no of vowels present in a text file.
#include <stdio.h>
#include <ctype.h>
int VowelCount(FILE* fptr){
    char ch;
    int vcount = 0;
    while((ch = getc(fptr))!=EOF)
    {
        ch = tolower(ch);
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':vcount++;
        }
    }
    return vcount;
}

int main()
{
    FILE * fptr;
    fptr = fopen("sample1.txt","r");
    int vcount = VowelCount(fptr);
    printf("the no of vowels in the file is %d",vcount);
    fclose(fptr);
    return 0;
}