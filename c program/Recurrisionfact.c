#include<stdio.h>
int fact(int a){
    if(a==1) return 1;
    return a*fact(a-1);
}
int main(){
    int n;
    printf("Enter The Number");
    scanf("%d",&n);
    int z=fact(n);
    printf("%d",z);
    return 0;
}