
/*This program defines an employee management system. It allows the user to enter details for a number of employees,and then calculate the total monthly salary for all full-time employees, the total earnings for all part-time employees, or the details of all employees. */

#include <stdio.h>

// The enum EmployeeType defines two employee types: Full-time and Part-time.

enum EmployeeType {
    FullTime,
    PartTime
};

/* The union EmployeeDetails defines two data structures fullTime stores the monthly salary and bonus for a full-time employee,  and partTime stores the hourly rate and hours worked for a part-time employee. */

union EmployeeDetails {
    struct {
        float monthlySalary;
        float bonus;
    } fullTime;
    struct {
        float hourlyRate;
        int hoursWorked;
    } partTime;
};

// The struct Employee stores the name, age, employee type, and employee details for an employee.
struct Employee {
    char name[50];
    int age;
    enum EmployeeType type;
    union EmployeeDetails details;
};

int main() {
    \\The main() function first prompts the user to enter the number of employees.
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
	\\loops through the employees and prompts the user to enter their details.
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);

        //int employeeType;
        enum EmployeeType employeeType;
        printf("Employee Type (0 for Full-time, 1 for Part-time): ");
        scanf("%d", &employeeType);

        if (employeeType == FullTime) {
            employees[i].type = FullTime;
            printf("Monthly Salary: ");
            scanf("%f", &employees[i].details.fullTime.monthlySalary);
            printf("Bonus: ");
            scanf("%f", &employees[i].details.fullTime.bonus);
        } else if (employeeType == PartTime) {
            employees[i].type = PartTime;
            printf("Hourly Rate: ");
            scanf("%f", &employees[i].details.partTime.hourlyRate);
            printf("Hours Worked: ");
            scanf("%d", &employees[i].details.partTime.hoursWorked);
        } else {
            printf("Invalid employee type! Setting as Full-time.\n");
            employees[i].type = FullTime;
            printf("Monthly Salary: ");
            scanf("%f", &employees[i].details.fullTime.monthlySalary);
            printf("Bonus: ");
            scanf("%f", &employees[i].details.fullTime.bonus);
        }
    }

    int choice;

    printf("\nEmployee Management System\n");
    printf("1. Calculate total monthly salary for all full-time employees\n");
    printf("2. Calculate total earnings for all part-time employees\n");
    printf("3. Display details of all employees\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    \\The switch statement allows the user to choose from a menu of options.
    switch (choice) {
        case 1: {
            float totalMonthlySalary = 0.0;
            for (int i = 0; i < numEmployees; i++) {
                if (employees[i].type == FullTime) {
                    totalMonthlySalary += employees[i].details.fullTime.monthlySalary;
                }
            }
            printf("Total monthly salary for all full-time employees: %.2f\n", totalMonthlySalary);
            break;
        }
        case 2: {
            float totalEarnings = 0.0;
            for (int i = 0; i < numEmployees; i++) {
                if (employees[i].type == PartTime) {
                    totalEarnings += employees[i].details.partTime.hourlyRate * employees[i].details.partTime.hoursWorked;
                }
            }
            printf("Total earnings for all part-time employees: %.2f\n", totalEarnings);
            break;
        }
        case 3: {
            printf("\nDetails of all employees:\n");
            for (int i = 0; i < numEmployees; i++) {
                printf("Employee %d\n", i + 1);
                printf("Name: %s\n", employees[i].name);
                printf("Age: %d\n", employees[i].age);

                if (employees[i].type == FullTime) {
                    printf("Employee Type: Full-time\n");
                    printf("Monthly Salary: %.2f\n", employees[i].details.fullTime.monthlySalary);
                    printf("Bonus: %.2f\n", employees[i].details.fullTime.bonus);
                } else if (employees[i].type == PartTime) {
                    printf("Employee Type: Part-time\n");
                    printf("Hourly Rate: %.2f\n", employees[i].details.partTime.hourlyRate);
                    printf("Hours Worked: %d\n", employees[i].details.partTime.hoursWorked);
                }

                printf("--------------------\n");
            }
            break;
        }
        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }


    return 0;
}