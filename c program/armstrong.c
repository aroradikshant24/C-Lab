#include<stdio.h>
int main(){
    int n;
    int l;
    int a=0;
    printf("enter the number");
    scanf("%d",&n);
    int b=n;
    while(n!=0){
        l=n%10;
        a=a+(l*l*l);
        n=n/10;
    }
    if(a==b){
        printf("the number is Armstrong %d",b);}
    else{
        printf("number is not Armstrong");
    }
    
    return 0;
}