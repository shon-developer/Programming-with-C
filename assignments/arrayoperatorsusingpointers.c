#include <stdio.h>

int main() {
    int arr[10];
    int *ptr;
    int largest, smallest, sum = 0;
    int i;

    /* Input 10 integers */
    printf("Enter 10 integers:\n");

    ptr = arr;
    for (i = 0; i < 10; i++, ptr++) {
        scanf("%d", ptr);
    }

    /* Initialize values */
    ptr = arr;
    largest = smallest = *ptr;

    /* Traverse array using pointer arithmetic */
    for (i = 0; i < 10; i++, ptr++) {

        if (*ptr > largest)
            largest = *ptr;

        if (*ptr < smallest)
            smallest = *ptr;

        sum += *ptr;
    }

    /* Display results */
    printf("\nLargest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    printf("Sum of all elements = %d\n", sum);

    return 0;
}