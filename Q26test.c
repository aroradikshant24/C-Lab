#include <stdio.h>
#include <string.h>
void changeSubstr(char *str, const char *oldSubstr, const char *newSubstr) {
char result[1000];
int i = 0, j = 0;
int oldLen = strlen(oldSubstr);
int newLen = strlen(newSubstr);
    while (str[i] != '\0') {
        if (strstr(&str[i], oldSubstr)==&str[i]) {
            strcpy(&result[j], newSubstr);
            j += newLen;
            i += oldLen;
        } else {
            result[j++] = str[i++];
        }}
    result[j] = '\0';
    strcpy(str, result);}
int main() {
char str[1000], oldSubstr[100], newSubstr[100];
printf("Enter the string: ");
fgets(str, 1000, stdin);
str[strcspn(str, "\n")] = '\0';
printf("Enter the substring : ");
scanf("%s", oldSubstr);
printf("Enter the new substring: ");
scanf("%s", newSubstr);
changeSubstr(str, oldSubstr, newSubstr);
printf("\nNew string: %s\n", str);
    return 0;}