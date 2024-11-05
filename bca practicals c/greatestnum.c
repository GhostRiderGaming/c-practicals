#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter the value of a,b,c:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b){
    if (b>c)
    {
       printf("a is greatest number\n"); 
    }
    else{
      printf("c is the greatest number\n");
    }
}
  else{
    if (b>c)
    {
       printf("b is greatest number\n"); 
    }
    else{
      printf("c is the greatest number\n");
    }
  }
  return 0;
}