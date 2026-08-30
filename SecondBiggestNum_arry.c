#include<stdio.h>

int main(){

int n,max1,max2;
printf("Enter the number of elements: ");
scanf("%d",&n);

int a[n];

printf("\nEnter the elements: ");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

max1=a[0];
max2=a[1];

for(int i=1;i<n;i++){

    if(a[i]>max1){

        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2 && a[i]!=max1){
        max2=a[i];
    }
}
printf("\nThe second biggest element is: %d",max2);
    return 0;

}