#include<stdio.h>
int main(){
    int i,n,j,k=0;
    printf("Enter the Number of Character in your string:");
    scanf("%d",&n);
    char original[n],reversed[n],str[n];
    printf("Now enter your string:");
    scanf("%c",&str);
    original==str;
    for ( i = 1; i <=n; i++)
    {
        printf("%d",str[i]);
    }
        for ( j = n; j >= 0; j--)
        {
            reversed[k]=str[j];
            k++;
        }
        
    
    if(original==reversed){
        printf("This string is a palindrome!");
    }
    else{
        printf("This string is not a palindrome!");
    }
}