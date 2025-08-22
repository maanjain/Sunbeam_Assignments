#include <stdio.h>
#include <string.h>

// Structure definition
struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// Function to initialize Employee
void emp_init(struct Employee *e, char *fname, char *lname, double sal) {
    strcpy(e->firstName, fname);
    strcpy(e->lastName, lname);
    if (sal < 0) sal = 0;  // salary cannot be negative
    e->monthlySalary = sal;
}

// Function to update salary
void set_salary(struct Employee *e, double sal) {
    if (sal < 0) sal = 0;
    e->monthlySalary = sal;
}

// Function to display Employee info
void emp_display(struct Employee *e) {
    printf("Employee: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: %.2f\n", e->monthlySalary);
    printf("Yearly Salary : %.2f\n", e->monthlySalary * 12);
    printf("-------------------------\n");
}

int main() {
    struct Employee emp1, emp2;

    // Initialize employees
    emp_init(&emp1, "Amit", "Sharma", 30000);
    emp_init(&emp2, "Neha", "Verma", 40000);

    // Display original salaries
    printf("Before Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    // Give 10% raise
    set_salary(&emp1, emp1.monthlySalary * 1.10);
    set_salary(&emp2, emp2.monthlySalary * 1.10);

    // Display after raise
    printf("After 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
