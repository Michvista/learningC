// a variable that contains the adress of some value in the comp memory, apointer
// %p prnt out the value of the pointer

#include <stdio.h>


int main(void) 
{
    char *m = "sdfsdn";
    printf("%c\n", (*m));
    printf("%s\n", m+1);
    printf("%c\n", *(m+5));
    printf("%c\n", *(m+57856756));
}