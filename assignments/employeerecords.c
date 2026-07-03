#include <stdio.h>

struct Employee {
    int empID;
    char name[50];
    float salary;
};

int main(){
    struct Employee emp[5];
    int i, highest = 0;
    float totalSalary = 0, averageSalary;
    /* Input Employee details */
    printf("Enter details of 5 employee:\n");
    for (i = 0; i < 5; i++){
        printf("\nEmployee &d\n", i + 1);
        printf("Enter Employee ID:");
        scanf("%d", &emp[i].empID);
        printf("Enter Name:");
        scanf("%[^\n]", emp[i].name);
        printf("Entry Salary:");
        totalSalary += emp[i].salary;
        if (emp[i].salary > emp[highest].salary){
            highest = i;
        }
    }
    /* Calculate average salary */
    averageSalary = totalSalary / 5;
    /* Display employee records */
    printf("\n\nEmployee Records\n");
    printf("-------------------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
    printf("-------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10.2f\n",
        emp[i].empID,
        emp[i].name,
        emp[i].salary);
    }
    printf("-------------------------------------------------\n");
    /* Display average salary */
    printf("\nAverage Salary of Employees = %.2f\n", averageSalary);
    return 0;
}

