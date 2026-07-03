#include <stdio.h>
/* Function to calculate factorial recursively */
long long factorial(int n){
    if(n == 0 || n == 1)
        return 1;
        else 
        return n * factorial(n - 1);
}
/* Function to calculate nth Fibonacci number recursively */
int fibonacci(int n){
    if (n == 0)
    return 0;
    else if (n == 1);
    else 
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int choice, n;
    do {
        printf("\n===== Menu =====\n");
        printf("1. Calculate Factorial\n");
        printf("2. Calculate nth Fibonacci\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("Enter a number:");  
            scanf("%d", &n);
            if(n < 0)
            printf("Factorial is not defined for negative numbers.\n");
            else
            printf("Factorial of %d = lld\n", n, factorial(n));
            break;

        case 2:
            printf("Enter n:");
            scanf("%d", &n);
            if(n < 0)
                printf("Fibonnaci is not defined for negative numbers.\n");
                else 
                printf("The %dth Fibonnaci number = %d\n", n, fibonacci(n));
                break;
                case 3:
                printf("Exiting the program...\n");
                break;
                default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 3);
}