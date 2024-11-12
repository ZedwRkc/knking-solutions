#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    printf("THe reversal is: %d%d%d\n", num%10,  (num/10)%10, (num/10)/10);

    return 0;
}