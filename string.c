#include <stdio.h>
#include <string.h>
// #include <cs50.h>

typedef struct 
{
    char *string;
   int  name;
    int number;
}
person;


int main(void) 
{
    person people[2];

    people[0].name = 1;
    people[0].number = 060;
    people[0].string = "mane";
    
    people[1].name = 2;
    people[1].number = 070;
    people[1].string = "asmane";

    int n=1;

  for (int i=0; i <2 ; i++) 
  {
      if (people[i].name ==n)
      {
        printf("found number, %s\n", people[i].string);
        return 0;
      }
  }
  printf("no number\n");
  return 1;

}


