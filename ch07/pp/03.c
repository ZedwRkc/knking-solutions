#include <stdio.h>

int main (void)
{
    double n, sum = 0;

    printf("This program sums a series of double values.\n");
    printf("Enter numbers (0 to terminate): ");
    
    scanf("%lf", &n);

    while (n != 0.0)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %f\n", sum);

    return 0;
}