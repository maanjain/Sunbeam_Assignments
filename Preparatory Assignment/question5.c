#include <stdio.h>

void main() {

    printf("Give Character ");

    // calculate using ASCII value
    char ch;
    scanf("%c", &ch);

    // char
    if (ch >= 'A' && ch <= 'Z')        // Uppercase
        printf("Uppercase");
    else if (ch >= 'a' && ch <= 'z')   // Lowercase
        printf("Lowercase");
    else if (ch >= '0' && ch <= '9')   // Digit
        printf("Digit");
    else                               // Other
        printf("Something else");
}
