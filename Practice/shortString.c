//Write a C program to demonstrate basic string operations such as copying one string to another, concatenating strings with spaces, finding the length of strings, and comparing two strings using string functions like strcpy(), strcat(), strlen(), and strcmp(). Print the results of concatenation, length, and string comparison.
 //strcpy(), strcat(), strlen(), and strcmp().
#include <stdio.h>
#include <string.h>   // Required for string functions

int main() {
    char str1[100], str2[100], str3[200];
    int length1, length2, compareResult;

    
    printf("Enter first string: ");
    gets(str1);   
    printf("Enter second string: ");
    gets(str2);

    strcpy(str3, str1);   
    printf("\nString after copying str1 into str3: %s\n", str3);

    strcat(str3, " ");   
    strcat(str3, str2);   
    printf("After concatenation with space: %s\n", str3);

    length1 = strlen(str1);
    length2 = strlen(str2);
    printf("\nLength of first string: %d", length1);
    printf("\nLength of second string: %d\n", length2);

    compareResult = strcmp(str1, str2);
    if (compareResult == 0)
        printf("\nBoth strings are equal.\n");
    else if (compareResult < 0)
        printf("\nFirst string is lexicographically smaller than second.\n");
    else
        printf("\nFirst string is lexicographically greater than second.\n");

    return 0;
}
