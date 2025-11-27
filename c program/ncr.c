#include<stdio.h>
 int fact(int x){ 
    int b=1;
    for(int i=1;i<=x;i++){
        b=b*i;
    }
    return b;
}
int ncr(int n,int r){
    int c=fact(n);
    int d=fact(r);
    int e=fact(n-r);
   int z = c / (d * e);
    return z;
}
int main(){
int n;
printf("enter the number n");
scanf("%d",&n);
int r;
printf("enter the number r");
scanf("%d",&r);
for(int i=0;int j=n;i<=j;i++){
  printf("%d ",ncr(n,r));
}
    return 0;
}
