//Write a program to perform selection of a candidate based on age and height using functions. 
//Use a user-defined function selection(), and call that function in the main function. 
//Use conditions say : age <25 and height > 5 feet
#include <stdio.h> 
int selection(int x, float y);
    int main() {
    int age;
    float height;
    printf("Enter the person's age: ");
    scanf("%d", &age);
 
    printf("Enter the person's height (in units): ");
    scanf("%f", &height);
 
    if (selection(age, height)) {
        printf("candidate selected (age < 25 AND height > 5).\n");
    } else {
        printf("cnadidate not selected.\n");
    }
 
    return 0; 
}
 
int selection(int x, float y) {

    if (x < 25 && y > 5.0) {
        return 1;
    } else {
        return 0; 
    }
}