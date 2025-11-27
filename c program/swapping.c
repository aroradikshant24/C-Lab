#include<stdio.h>
int main(){
    int a=11;
    int b=15;
    int temp=a;
    a=b;
    b=temp;

    printf("a=%d",a);
    printf("/nb=%d",b);
    return 0;

}