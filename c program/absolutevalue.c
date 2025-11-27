#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x>=0){
        printf("absolute no is %d",x);
    
    }
    else{
        printf("absolute no is %d",x*-1);
    }
    return 0;

}