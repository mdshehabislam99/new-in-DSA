#include<stdio.h>

int main(){
    int i = 1;
  do   
    {
        if (i % 2 == 0)
        {
            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
        
        printf("%d ", i);
        i++;
    }
      while(i <= 5); 
    return 0;
}