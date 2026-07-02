/*
Write a menu-driven C program using switch to calculate the electricity bill based on units consumed:
First 100 units > 5 per unit
Next 200 units (100-300) > 7 per unit
Above 300 units > 10 per unit 
The menu must provide the following options:
- Option 1: Calculate Bill (Accept units consumed and display total bill)
- Option 2: Exit
*/

#include <stdio.h>

int main() {
    int choice, units;
    float bill;

    do {
        printf("\n===== Electricity Bill Menu =====\n");
        printf("1. Calculate Bill\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter the number of units consumed: ");
                scanf("%d", &units);

                if (units <= 100) {
                    bill = units * 5;
                }
                else if (units <= 300) {
                    bill = (100 * 5) + ((units - 100) * 7);
                }
                else {
                    bill = (100 * 5) + (200 * 7) + ((units - 300) * 10);
                }

                printf("Total Electricity Bill = ₹%.2f\n", bill);
                break;

            case 2:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 2);

    return 0;
}
