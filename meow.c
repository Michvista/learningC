#include <stdio.h>

int main(void) 
{
  int n;

  do 
  {
    n = 20;
  }
  while (n<1);

  for (int i=0; i <n ; i++) 
  {
        for (int j=6; j <n ; j++) 
    {
        printf("#");
    } 
    printf("\n");
  }
}