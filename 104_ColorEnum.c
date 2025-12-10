#include <stdio.h>
typedef enum {
    RED = 0xFF0000,
    GREEN = 0x00FF00,
    BLUE = 0x0000FF
} Color;

int main()
{
    Color c = BLUE;
    switch(c)
    {
        case BLUE: printf("0x%06X\n",BLUE);
                   break;
        case GREEN: printf("0x%06X\n",GREEN);
                    break;
        case RED: printf("0x%06X\n",RED);
    }
    return 0;
}