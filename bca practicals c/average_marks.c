#include<stdio.h>
int main()
{
    int n,i;
    float avg;
    printf("enter the number of students in your class:");
    scanf("%d",&n);
    int marks[n];
    for ( i = 1; i <=n; i++)
    {
        printf("enter the marks of student %d:",i);
        scanf("%d",&marks[i]);
        avg=avg+marks[i];
    }
    avg=avg/n;
    printf("Avg marks of all students is %f",avg);
    return 0;
}