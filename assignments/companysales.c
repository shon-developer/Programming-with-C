#include <stdio.h>

int main() {
    int sales[3][4];
    int branchTotal[3] = {0};
    int productTotal[4] = {0};
    int i, j, highestBranch = 0;

    /* Input sales data */
    printf("Enter monthly sales data for 3 branches and 4 products:\n");

    for (i = 0; i < 3; i++) {
        printf("\nBranch %d\n", i + 1);

        for (j = 0; j < 4; j++) {
            printf("Product %d Sales: ", j + 1);
            scanf("%d", &sales[i][j]);

            branchTotal[i] += sales[i][j];
            productTotal[j] += sales[i][j];
        }
    }

    /* Display sales table */
    printf("\n\nSales Table\n");
    printf("-------------------------------------------------\n");
    printf("%-10s %-10s %-10s %-10s %-10s\n",
           "Branch", "Prod1", "Prod2", "Prod3", "Prod4");
    printf("-------------------------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("%-10d", i + 1);

        for (j = 0; j < 4; j++) {
            printf("%-10d", sales[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------------------------\n");

    /* Total sales per branch */
    printf("\nTotal Sales per Branch:\n");
    for (i = 0; i < 3; i++) {
        printf("Branch %d = %d\n", i + 1, branchTotal[i]);

        if (branchTotal[i] > branchTotal[highestBranch]) {
            highestBranch = i;
        }
    }

    /* Total sales per product */
    printf("\nTotal Sales per Product:\n");
    for (j = 0; j < 4; j++) {
        printf("Product %d = %d\n", j + 1, productTotal[j]);
    }

    /* Branch with highest sales */
    printf("\nBranch with Highest Total Sales: Branch %d\n",
           highestBranch + 1);
    printf("Total Sales = %d\n", branchTotal[highestBranch]);

    return 0;
}