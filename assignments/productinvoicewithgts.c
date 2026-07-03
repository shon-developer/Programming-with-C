#include <stdio.h>

#define GST 18

struct Product {
    int productID;
    char productName[60];
    float price;
};

int main() {
    struct Product p[3];
    float gstAmount, finalPrice;
    int i;

    /* Input product details */
    printf("Enter details of 3 products:\n");

    for (i = 0; i < 3; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &p[i].productID);

        printf("Enter Product Name: ");
        scanf(" %[^\n]", p[i].productName);

        printf("Enter Base Price: ");
        scanf("%f", &p[i].price);
    }

    /* Display invoice */
    printf("\n\n================ PRODUCT INVOICE ================\n");
    printf("-----------------------------------------------------------------------\n");
    printf("%-10s %-20s %-12s %-12s %-12s\n",
           "ID", "Name", "Base Price", "GST", "Final Price");
    printf("-----------------------------------------------------------------------\n");

    for (i = 0; i < 3; i++) {
        gstAmount = p[i].price * GST / 100.0;
        finalPrice = p[i].price + gstAmount;

        printf("%-10d %-20s %-12.2f %-12.2f %-12.2f\n",
               p[i].productID,
               p[i].productName,
               p[i].price,
               gstAmount,
               finalPrice);
    }

    printf("-----------------------------------------------------------------------\n");

    return 0;
}