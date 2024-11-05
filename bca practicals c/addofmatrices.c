#include<stdio.h>
int main(){
    int m1,n1,m2,n2,i=1,j=1,k=1,l=1,m=1;
    printf("Enter the m of matrix1:");
    scanf("%d",&m1);
    printf("Enter the n of matrix1:");
    scanf("%d",&n1);
    printf("Enter the m of matrix2:");
    scanf("%d",&m2);
    printf("Enter the n of matrix2:");
    scanf("%d",&n2);
    if(m1!=m2||n1!=n2){
        printf("Cannot add these matrices directly!");
    }
    else{
        int matrix1[m1*n1],matrix2[m2*n2],matrix3[m1*n1];
    printf("Enter the elements row wise\n");
    for (i = 1; i <= m1*n1 ; i++)
    {
        printf("enter the value of %d element:",i);
        scanf("%d",&matrix1[i]);

    }
     for (j = 1; j <= m1*n1 ; j++)
    {
        printf("enter the value of %d element:",j);
        scanf("%d",&matrix2[j]);
        
    }
    while (l<=m1*n1&&m<=m2*n2)
    {
        matrix3[k]=matrix1[l]+matrix2[m];
        l++;
        m++;
        k++;
    }
    for ( k = 1; k <= m1*n1; k++)
    {
        printf("%d element of resultant matrix is %d\n",k,matrix3[k]);
    }
    
}
return 0;
}