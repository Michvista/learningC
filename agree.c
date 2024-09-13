#include <stdio.h>

int main(void) 
{
    char c = 'N';

    if (c == 'y' || c == 'Y') 
    {
        printf("he agreed");
    }
    if (c == 'n' || c == 'N') 
    {
        printf("no agreed");
    }
}