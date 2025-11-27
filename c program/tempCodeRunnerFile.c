#include<stdio.h>
int main(){
    int n;
    int b=n;
    int a=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0){
        n=n%10;
        a=a+(n*n*n);
    }
    if(a==b){
        printf("the number is angstrom: %d",b);}
    else{
        printf("number is not angstrom");
    }