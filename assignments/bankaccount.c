#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char holderName[50];
    float balance;
};

/* Function to deposit money */
void Deposit(struct BankAccount *acc, float amount) {
    acc->balance += amount;
    printf("Amount %.2f deposited successfully.\n", amount);
}

/* Function to withdraw money */
void Withdraw(struct BankAccount *acc, float amount) {
    if (amount > acc->balance) {
        printf("Insufficient balance! Withdrawal denied.\n");
    } else {
        acc->balance -= amount;
        printf("Amount %.2f withdrawn successfully.\n", amount);
    }
}

/* Function to display account details */
void DisplayBalance(struct BankAccount *acc) {
    printf("\nAccount Details\n");
    printf("----------------------------\n");
    printf("Account Number : %d\n", acc->accountNumber);
    printf("Account Holder : %s\n", acc->holderName);
    printf("Current Balance: %.2f\n", acc->balance);
}

int main() {
    struct BankAccount account;
    float depositAmount, withdrawAmount;

    /* Input account details */
    printf("Enter Account Number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.holderName);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    /* Deposit operation */
    printf("\nEnter amount to deposit: ");
    scanf("%f", &depositAmount);
    Deposit(&account, depositAmount);

    /* Withdraw operation */
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &withdrawAmount);
    Withdraw(&account, withdrawAmount);

    /* Display updated balance */
    DisplayBalance(&account);

    return 0;
}