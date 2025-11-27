#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number ");  
    scanf("%d %d",&a,&b);
    printf("remainder is %d",b-(a/b));  
    return 0;
}