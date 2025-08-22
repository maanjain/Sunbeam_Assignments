
#include <stdio.h>

int main() {
    int n;

    printf("Enter Input:");
    scanf("%d", &n);

    // calculate Factorial
    int fact = 1;

    for (int i = n; i > 0; i--) {
        fact *= i;
    }

    printf("Factorial is : %d", fact);

    return 0;
}
