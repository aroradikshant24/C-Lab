//Write a C program to implement your own versions of string handling functions—copying a string, finding the length of a string, concatenating two strings, and comparing two strings—without using the standard library functions. Define and use user-defined functions copy(), length(), concatenate(), 
//and String_Comparison() to perform these operations on strings , 
//and demonstrate these functions in the main() function.
#include <stdio.h>

void copy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int length(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void concatenate(char *str1, char *str2, char *result) {
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }
    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }
    *result = '\0';
}

int String_Comparison(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;  
        }
        str1++;
        str2++;
    }
    return (*str1 == *str2);  
}

int main() {
    char str1[100], str2[100], result[200];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Copy
    copy(str1, result);
    printf("Copied String: %s\n", result);

    // Length
    printf("Length of first string: %d\n", length(str1));
    printf("Length of second string: %d\n", length(str2));

    // Concatenate
    concatenate(str1, str2, result);
    printf("Concatenated String: %s\n", result);

    // Compare
    if (String_Comparison(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}