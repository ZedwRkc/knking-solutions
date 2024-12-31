#include <stdio.h>

int main(void)
{
    long n;
    int digit, digit_count[10] = {0};

    while (1)
    {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n <= 0)
            break;

        while (n > 0)
        {
            digit = n % 10;
            digit_count[digit]++;
            n /= 10;
        }

        printf("Digit:      ");
        for (digit = 0; digit <= 9; digit++)
            printf("%3d", digit);

        printf("\nOccurrences:");
        for (digit = 0; digit <= 9; digit++)
            printf("%3d", digit_count[digit]);
        printf("\n");

        // Reset digit_count for the next number
        for (digit = 0; digit <= 9; digit++)
            digit_count[digit] = 0;
    }

    return 0;
}