#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    char str[200];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // read full line including spaces

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        char ch = toupper(str[i]);  // make case-insensitive
        if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        }
    }

    // Display results
    printf("\nOccurrences of alphabets:\n");
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", 'A' + i, freq[i]);
        }
    }

    return 0;
}
