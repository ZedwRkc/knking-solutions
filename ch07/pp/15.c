#include <stdio.h>

int main (void)
{
    int n, i;
    long double factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = n; i > 1; i--)
    {
        factorial *= i;
        if (factorial < 0) 
            { // Overflow detection
                printf("Overflow occurs at n is %d\n", i);
                break;
            }
    }

    printf("Factorial of %d: %.Lf\n", n, factorial);
    return 0;
}
