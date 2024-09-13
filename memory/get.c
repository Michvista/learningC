// strings are always memories because they are arrays of characters
#include <stdio.h>
#include <stdlib.h>

void string(void);
int main(void) 
{
    // get int 
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);

    // get str
    string();
}

void string(void) 
{
    char *c[4];
    printf("s: ");
    scanf("%s", c);
    printf("s: %s\n", c);
}