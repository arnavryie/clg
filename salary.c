#include <stdio.h>

// Structure definition for employee details
struct Employee {
    int id;                // Employee ID
    char name[50];         // Employee Name
    float basic_salary;    // Basic Salary
    float bonus;           // Bonus
    float total_salary;    // Total Salary
};

// Function to calculate total salary
void calculateTotalSalary(struct Employee *emp) {
    emp->total_salary = emp->basic_salary + emp->bonus;
}

int main() {
    int num_employees, i;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Array of employee structures
    struct Employee employees[num_employees];

    // Input details for each employee
    for (i = 0; i < num_employees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", employees[i].name);

        printf("Enter Employee Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);

        printf("Enter Employee Bonus: ");
        scanf("%f", &employees[i].bonus);

        // Calculate salary
        calculateTotalSalary(&employees[i]);
    }

    // Print employee salary details
    printf("\nEmployee Details:\n");
    for (i = 0; i < num_employees; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Basic Salary: %.2f\n", employees[i].basic_salary);
        printf("Bonus: %.2f\n", employees[i].bonus);
        printf("Total Salary: %.2f\n", employees[i].total_salary);
    }

    return 0;
}

