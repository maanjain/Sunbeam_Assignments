#include <stdio.h>

// Structure definition
struct Student {
    char studentName[50];
    char rollNo[20];   // alphanumeric
    int totalMarks;
};

// Function to read student details
void readStudent(struct Student *s) {
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s->studentName);   // read full line including spaces

    printf("Enter Roll Number: ");
    scanf("%s", s->rollNo);  // alphanumeric string

    printf("Enter Total Marks: ");
    scanf("%d", &s->totalMarks);
}

// Function to display student details
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name       : %s\n", s.studentName);
    printf("Roll Number: %s\n", s.rollNo);
    printf("Marks      : %d\n", s.totalMarks);
}

int main() {
    struct Student s1 , s2;

    // Read student info
    readStudent(&s2);
    readStudent(&s1);

    // Print student info
    printStudent(s1);

    return 0;
}
