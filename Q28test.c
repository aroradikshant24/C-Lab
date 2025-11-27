#include <stdio.h>
#include <ctype.h>  
int main()
{
char str[200];
int consonants = 0, digits = 0, spaces = 0, vowels = 0;
int i = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0'){
        char ch = tolower(str[i]); 
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
                vowels++;
            else
             consonants++; } 
        else if (isdigit(ch))
            digits++;
        else if (ch == ' ')
            spaces++;
        i++; }
printf("digits %d\n",digits);
printf("spaces %d\n",spaces);
printf("vowels %d\n",vowels);
printf("consonants %d\n",consonants);
    return 0;
}