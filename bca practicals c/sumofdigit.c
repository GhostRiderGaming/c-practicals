#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while (n>=1)
    {
        sum+=n%10;
         n/=10;

    }
  printf("Sum of digits is %d",sum);  
  return 0;
}