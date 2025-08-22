
#include <stdio.h>

int main() {
    // Fibonacci

    printf("Enter Marks of 5 Subject ");

    int arr[5];
    int sum = 0;

    // ask for marks
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    if (sum >= 90)
        printf("Grade: Ex");
    else if (sum >= 80 && sum < 90)
        printf("Grade: A");
    else if (sum >= 70 && sum < 80)
        printf("Grade: B");
    else if (sum >= 60 && sum < 70)
        printf("Grade: C");
    else if (sum < 60)
        printf("Grade: F");

    return 0;
}
