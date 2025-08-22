#include <stdio.h>

// Function to print binary using bitwise operators
void printBinary(int n) {
    int i;
    int started = 0; // to avoid leading zeros
    for (i = 31; i >= 0; i--) {
        if (n & (1 << i)) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
    }
    if (!started) printf("0"); // if n = 0
}

// Recursive function to print Octal
void printOctal(int n) {
    if (n == 0) return;
    printOctal(n / 8);
    printf("%d", n % 8);
}

// Recursive function to print Hexadecimal
void printHex(int n) {
    if (n == 0) return;
    printHex(n / 16);
    int rem = n % 16;
    if (rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem - 10 + 'A');  // A-F for hex
}

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    printf("Given Number : %d\n", num);

    // Binary
    printf("Binary equivalent      : ");
    printBinary(num);
    printf("\n");

    // Octal
    printf("Octal equivalent       : ");
    if (num == 0) printf("0"); else printOctal(num);
    printf("\n");

    // Hexadecimal
    printf("Hexadecimal equivalent : ");
    if (num == 0) printf("0"); else printHex(num);
    printf("\n");

    return 0;
}
