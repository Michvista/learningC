// a variable that contains the adress of some value in the comp memory, apointer
// %p prnt out the value of the pointer

#include <stdio.h>


int main(void) 
{
    int n = 50;
    int *m = &n;
    int **p= &m;
    printf("ampersand %p\n", &n);
    printf("%p\n", m);
    printf("got to what m is storing %i\n", *m); //drefernce m
    printf("pointer pointer %p\n", p);
}