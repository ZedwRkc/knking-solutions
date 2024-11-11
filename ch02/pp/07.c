#include <stdio.h>

int main(void)
{
    int dollar_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    int twenty = dollar_amount/20;
    dollar_amount = dollar_amount - twenty*20;

    int ten = dollar_amount/10;
    dollar_amount = dollar_amount - ten*10;

    int five = dollar_amount/5;
    dollar_amount = dollar_amount - five*5;

    int one = dollar_amount;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}