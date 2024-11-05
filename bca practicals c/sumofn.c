#include<stdio.h>
int main(){
    int sum=0,i=1;
    while (i<11)
    {
       printf("%d\n",i);
       sum += i;
       i++;
    }
    printf("sum of first 10 natural numbers is %d\n",sum);
}