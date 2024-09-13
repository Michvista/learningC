#include <stdio.h>
#include <stdlib.h>

void string(void);
int main(void) 
{
    // get int 
    int x;
    printf("x: ");
    scanf("%i", &x);

    int y;
    printf("y: ");
    scanf("%i", &y);
    printf("add %i\n", x + y);

}