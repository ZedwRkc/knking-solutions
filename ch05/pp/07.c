#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    largest = smallest = num1;

    if (num1 < num2)
        largest = num2;
    
    if (largest < num3)
        largest = num3;
    
    else if (num3 < smallest)
        smallest = num3;
    
    if (largest < num4)
        largest = num4;
    
    else if (num4 < smallest)
        smallest = num4;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
    

     

    