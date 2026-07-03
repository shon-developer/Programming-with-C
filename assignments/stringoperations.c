#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, palindrome = 1;
    /* Input String */
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    /* Find length */
    len = strlen(str);
    /* Reverse the string manually */
    for (i = 0; i < len; i++) {
        rev[i] = str [len - 1 - i];
    }
    rev[i] = '\0'; 
    /* Check palindrome */
    if(strcmp(str, rev) !=0) {
        palindrome = 0;
    }
    /* Display results */
    printf("\nLength of the string = %d\n", len);
    printf("\nReverse of the string = %d\s", rev);
    if (palindrome)
    printf("Palindrome: Yes\n");
    else 
    printf("Palindrome: No\n");
    return 0;
}