#include<stdio.h>
int main(){
   int n,i;
   printf("Enter the number:");
   scanf("%d",&n);
   for ( i = 2; i <n; i++)
   {
if (n%i==0)
{
    break; 
}
   }
  if (i==n)
  {
    printf("Number you entered is prime");
  }
  else if (n<0)
  {
    printf("Invalid Response!");
  }
  else{
    printf("Number you entered is not /prime");
  }
   return 0;
}
