#include <stdio.h>
#include <stdlib.h>

// void string(char *c[4],char *d); 
// void get_int( int x,char *d) ;

int main(void) 
{
    FILE *file = fopen("phonebook.csv", "a");
    char *name = "mama";
    int number = 555543;
    // string(name, "Name");
    // get_int(number, "Number");

    printf("name: %s number:%i", name, number);

    fprintf(file, "%s,%i\n", name, number);

    fclose(file);
}

// void string(char *c[4],char *d) 
// {
//     printf("%s: ", d);
//     scanf("%s", c);
//     printf(" %s: %s\n", d,c);
// }

// void get_int( int x,char *d) 
// {
//     printf("%s: ", d);
//     scanf("%i", &x);
//     printf(" %s: %i\n", d,x);
// }