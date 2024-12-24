#include <stdio.h>

int main (void)
{
    float num, total;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((op = getchar()) != '\n')
    {

        switch (op)
        {
        case '+':
            scanf("%f", &num);
            total += num;
            break;

        case '-':
            scanf("%f", &num);
            total -= num;
            break;

        case '*':
            scanf("%f", &num);
            total *= num;
            break;

        case '/':
            scanf("%f", &num);
            total /= num;
            break;

        default:
            printf("Invalid operator\n");
            break;
        }
    }
    printf("Value of expression: %.1f\n", total);

    return 0;
}