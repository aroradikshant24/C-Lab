#include<stdio.h>
int main(){
    int n;
    printf("enter the number n :");
    scanf("%d",&n);
    int i =0;
    int a=0,b=0;

    while(n>i){
        i++;
        if(i%2==0){
            a=a+i;
        }
        else{
            b=b+i;
        }
    }
    printf("The sum of the series is :%d",b-a);
    return 0;
}