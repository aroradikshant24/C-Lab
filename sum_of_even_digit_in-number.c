#include<stdio.h>
int main(){
     int n;
     printf("enter the number :");
     scanf("%d",&n);
     int sum =0;
     while(n>0){
        if(n%2==0){
        sum=sum + (n%10);}
        else{
            sum =sum+0;
        }
        n=n/10 ;
     }
printf("%d",sum);


    return 0;
    }