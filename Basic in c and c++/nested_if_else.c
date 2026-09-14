#include<stdio.h>

int main(){
    int n;
scanf("%d", &n);
if(n > 0)
{
    if(n % 2 == 0)
    {
        printf("The number is positive and even.\n");
    }
    else
    {
        printf("The number is positive and odd.\n");
    }
}
else if(n < 0)
{
    if(n % 2 == 0)
    {
        printf("The number is negative and even.\n");
    }
    else
    {
        printf("The number is negative and odd.\n");
    }
}
else
{
    printf("The number is zero.\n");
    
}