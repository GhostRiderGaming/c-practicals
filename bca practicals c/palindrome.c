#include<stdio.h>
int main()
{
    int n,original,reversed=0;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    while (n!=0)
    {
        reversed=reversed*10+n%10;
        n /= 10;
    }
    if (original==reversed)
    {
        printf("The Number you entered is a palindrome");
    }
    else if (n<0)
    {
        printf("Invalid Response!");
    }
    
    else
    {
        printf("The Number you enterd is not a palindrome");
    }
    
    return 0;
}