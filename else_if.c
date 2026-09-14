#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("monday\n");
    }
    else if(n == 2)
    {
        printf("tuesday\n");
    }
    else if(n == 3)
    {
        printf("wednesday\n");
    }
    else if(n == 4)
    {
        printf("thursday\n");
    }
    else if(n == 5)
    {
        printf("friday\n");
    }
    else if(n == 6)
    {
        printf("saturday\n");
    }
    else if(n == 7)
    {
        printf("sunday\n");
    }
    else
    {
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }


    return 0;
}