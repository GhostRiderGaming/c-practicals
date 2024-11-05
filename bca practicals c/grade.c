#include<stdio.h>
int main(){
    int marks,i;
    char grade,name[10];
    printf("enter your name: ");
    scanf("%9s",&name);
    printf("enter your marks: ");
    scanf("%d",&marks);
    if(marks>=89){
        grade='A';
    }
    else if(marks>=60){
        grade='B';
    }
    else if (marks>=50)
    {
        grade='C';
    }
    else if (marks>=40)
    {
        grade='D';
    }
    else{
        grade='E';
    }
    printf("%9s has %d marks with grade=%c",name,marks,grade);
    return 0;
}