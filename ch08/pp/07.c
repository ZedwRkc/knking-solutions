#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("\nRow totals: ");
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
            sum += arr[i][j];
        printf("%d ", sum);
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
            sum += arr[j][i];
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}