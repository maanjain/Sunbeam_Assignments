
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // read line including spaces

    // Find length
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // Reverse by swapping
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

