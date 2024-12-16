#include <stdio.h>

int main (void)
{
    int num, denom;    
    float e = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &num);
 
    for(int i = 1, denom = 1; i <= num; i++)
    {
        denom *= i;

        e += 1/denom;
    }

    printf("%f\n", e);

    return 0;
}