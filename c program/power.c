#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number :");
    scanf("%d %d",&a,&b);
    int power =1;
    for(int i=1;i<=b;i++){
        power=power*a;

    }
printf("%d",power);

    return 0;

}