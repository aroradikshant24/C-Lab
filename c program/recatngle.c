#include<stdio.h>
int main()
{
    float l;
    printf("enter the length of rectangle");
    scanf("%f",&l);
    float b;
    printf("enter the breadth of rectangle");
    scanf("%f",&b);
    float area;
    area =l*b;
    float x;
    x=2*(l+b);
    if(area>x ){
        printf("area of rectangle is greater than its perimeter");

    }
    else{
        printf("perimeter of rectangle is greater than its area");
    }
    return 0;
}