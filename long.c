// long has more bits available to you enabling one to add huge amounts of values unline int that only allows up to billion
#include <stdio.h>


int main(void) 
{
    long n =1;
    long x = 3;
    // %s =formatted code to add a variable in print
    // %f = for adding floating in case of divising of numbers
    // float z = x / n
    // type casting below
    float z = (float) x / (float) n;
    printf("%f\n", z);
    // to show 20 didts after the devimal points
    printf(".20%f\n", z);
}