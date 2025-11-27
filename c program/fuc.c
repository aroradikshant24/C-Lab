#include<stdio.h>
int main(){
float num1,num2;
char op;
printf("enter the first number:");
scanf("%f",&num1);
printf("enter the + or - :");
scanf(" %c",&op);
printf("enter the second number:");
scanf("%f",&num2);
if (op =='+'){
    printf("result:%.2f\n",num1+num2);
}else if (op =='-'){
    printf("result:%.2f\n",num1-num2);

}
return 0;



}