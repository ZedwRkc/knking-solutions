#include <stdbool.h> /* C99 only */
#include <stdio.h>
int main(void)
{
    bool digit_seen[10] = {false};
    bool repeated[10] = {false};

    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        if(!digit_seen[digit])
            digit_seen[digit] = true;

        else
            repeated[digit] = true;
        
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for(digit = 0; digit < 10; digit++)
    {
        if(repeated[digit])
            printf("%d ", digit);
    }
    printf("\n");

    return 0;
}