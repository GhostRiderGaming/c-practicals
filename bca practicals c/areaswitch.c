#include<stdio.h>
#define pi 3.14
int main(){
    int side,area,length,height,breadth,radius,base,choice;
    printf("To calculate the area of Square press 0!");
    printf("To calculate the area of Rectangle press 1!");
    printf("To calculate the area of Triangle press 2!");
    printf("To calculate the area of Circle press 3!");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0: 
        printf("enter the side of square:");
        scanf("%d",&side);
        area = side*side;
        printf("Area of Square is %d",area);
        break;
    case 1:
         printf("enter the length and breadth of rectangle:");
        scanf("%d%d",&length,&breadth);
        area = length*breadth;
        printf("Area of Rectangle is %d",area);
        break;
    case 2:
        printf("enter the height and base of triangle:");
        scanf("%d%d",&height,&base);
        area = 0.5*height*base;
        printf("Area of Triangle is %d",area);
        break;
    case 3:
         printf("enter the radius of circle:");
        scanf("%d",&radius);
        area =pi*radius*radius;
        printf("Area of Circle is %d",area);
        break;
    
    default:
        printf("Invalid Response");
        break;
    }
    return 0;
}