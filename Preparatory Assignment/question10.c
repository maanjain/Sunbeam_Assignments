#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparison function for qsort
int compareNames(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char nameOfStudents[10][50];
    int n, i;

    printf("Enter number of students (max 10): ");
    scanf("%d", &n);

    if (n > 10) n = 10; // limit to 10

    // Input names
    printf("Enter %d student names:\n", n);
    for (i = 0; i < n; i++) {
        scanf(" %[^\n]", nameOfStudents[i]);  // read string with spaces
    }

    // Sort using qsort
    qsort(nameOfStudents, n, sizeof(nameOfStudents[0]), compareNames);

    // Print sorted names
    printf("\nSorted Student Names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
