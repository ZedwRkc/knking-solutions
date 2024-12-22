#include <stdio.h>

int main (void)
{
    int num1, num2, denom1, denom2, result_num, result_denom;
    char oper;

    printf("Enter first fraction: "); 
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);
    
    getchar();

    printf("Enter the operator: ");
    scanf("%c", &oper);

    switch (oper)
    {

        case '+':
            result_num =  num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;

        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;

        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;

        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;

        default:
            printf("You entered an incorrect operator.\n");
            return 1;
    }

    int a = result_num;
    int gcd = result_denom;
    int temp;

    while(a != 0)
    {
        int temp = gcd % a;
        gcd = a;
        a = temp; 
    }
    
    result_num /= gcd;
    result_denom /= gcd;
    
    printf("%d/%d %c %d/%d = %d/%d\n", num1, denom1, oper, num2, denom2, result_num, result_denom);
    
    return 0;
}
