#include <stdio.h>


int main(void) 
{
    int numbers[] = {20,100,500,5,10,1,50};

      int n=150;

  for (int i=0; i <7 ; i++) 
  {
      if (numbers[i] ==n)
      {
        printf("found\n");
        return 0;
      }
  }
  printf("not found\n");
  return 1;
}