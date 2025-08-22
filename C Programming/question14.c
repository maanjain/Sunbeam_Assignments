#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // read string with spaces

    int len = strlen(str);

    // Compare from both ends
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
           printf("The string is NOT a Palindrome.\n");
           break;
        }
        else {
        printf("The string is a Palindrome.\n");
        break;
        }
    }

    

    return 0;
}
