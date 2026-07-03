#include <stdio.h>

int main() {
    int N, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    printf("\nEven numbers (1-%d): ", N);
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            evenCount++;
        }
    }

    printf("\nOdd numbers (1-%d): ", N);
    for (i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            oddCount++;
        }
    }

    printf("\n\nTotal Even: %d\n", evenCount);
    printf("Total Odd : %d\n", oddCount);

    return 0;
}