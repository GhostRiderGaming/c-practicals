#include<stdio.h>
int main(){
    int fact=1,i,n;
    printf("Enter the number to calculate factorial:");
    scanf("%d",&n);
    i=n;
    while (i>0)
    {
       fact *= i;
       i--;
    }
    printf("factorial of number %d is %d\n",n,fact);
}