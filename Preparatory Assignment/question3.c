
#include <stdio.h>

int main() {
    // Fibonacci

    printf("Enter Input:");
    int n;
    scanf("%d", &n);

    int arr[n];

    // calculation of Fibonacci Series
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 0; i < n - 2; i++) {
        arr[i + 2] = arr[i] + arr[i + 1];
    }

    for (int j = 0; j < n; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}
