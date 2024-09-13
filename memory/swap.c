// heap overflow overflow when u toch memory that u arent supposed to toch 
// buffer when u toch memory that u arent supposed to toch 
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) ;


int main(void)
 {
    int x =1 ;
    int y =2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x,&y);
    printf("x is %i, y is %i\n", x, y);
}


void swap(int *a, int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


