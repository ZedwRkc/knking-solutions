#include <stdio.h>

int main(void)
{
    float loan;
    float interest_rate, monthly_rate;
    float monthly_payment;
    float balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_rate = interest_rate / 100 / 12;

    balance = loan - monthly_payment + (loan * monthly_rate);
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = balance - monthly_payment + (balance * monthly_rate);
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = balance - monthly_payment + (balance * monthly_rate);
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}