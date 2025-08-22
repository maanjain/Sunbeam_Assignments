#include <stdio.h>
#include <string.h>

int main() {
    // Hardcoded array of strings
    char *arr[] = {"apple", "banana", "apple", "orange", "grapes", "banana", "apple"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Duplicate strings are:\n");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                printf("%s\n", arr[i]);
                break;  // avoid printing same duplicate multiple times
            }
        }
    }

    return 0;
}
