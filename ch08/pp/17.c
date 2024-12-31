#include <stdio.h>

int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if (n < 1 || n > 99 || n % 2 == 0)
    {
        printf("Size must be an odd number between 1 and 99.\n");
        return 1;
    }

    int magic_square[n][n];

    // Initialize the magic square with zeros
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0;

    int row = 0, col = n / 2;
    magic_square[row][col] = 1;

    for (int num = 2; num <= n * n; num++)
    {
        int new_row = (row - 1 + n) % n;
        int new_col = (col + 1) % n;

        if (magic_square[new_row][new_col] != 0)
        {
            new_row = (row + 1) % n;
            new_col = col;
        }

        magic_square[new_row][new_col] = num;
        row = new_row;
        col = new_col;
    }

    // Print the magic square
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}