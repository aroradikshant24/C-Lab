#include<stdio.h>
int main(){
    int n;

    printf("enter the number :");
    scanf("%d",&n);
    int r=0;
    int x =n;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
        
    }
    printf("%d",r+x);
}