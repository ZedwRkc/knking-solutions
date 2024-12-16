#include <stdio.h>

int main (void)
{
    float num;
    float largest = 0.0f;

    do
    {
        printf("Enter a number: ");
        scanf("%f", &num);

        if(num > largest)
            largest = num;
    } while (num > 0);

    printf("The largest number entered was 100.62\n");
    return 0;
}
