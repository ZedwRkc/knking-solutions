#include <stdio.h>

int main (void)
{
    float loan;
    float interest_rate, monthly_rate;
    float monthly_payment;
    float balance;
    int num_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter the number of payments: ");
    scanf("%d", &num_of_payments);

    monthly_rate = interest_rate / 100 / 12;
    balance = loan - monthly_payment + (loan * monthly_rate);
    
    printf("Balance remaining after 1 month(s): %.2f\n", balance);

    for (int i = 2; i <= num_of_payments; i++)
    {
        balance = balance - monthly_payment + (balance * monthly_rate);
        printf("Balance remaining after %d month(s): %.2f\n", i, balance);
    }
    return 0;
}