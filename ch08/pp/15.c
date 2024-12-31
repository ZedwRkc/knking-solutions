#include <stdio.h>

int main(void)
{
    char message[80], ch;
    int n, i = 0;

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n' && i < 80)
        message[i++] = ch;

    printf("Enter n amount (1-25): ");
    scanf("%d", &n);

    for (int j = 0; j < i; j++)
    {
        ch = message[j];
        if (ch >= 'A' && ch <= 'Z')
            ch = ((ch - 'A') + n) % 26 + 'A';

        else if (ch >= 'a' && ch <= 'z')
            ch = ((ch - 'a') + n) % 26 + 'a';

        message[j] = ch;
    }

    for (int j = 0; j < i; j++)
        printf("%c", message[j]);
    printf("\n");
    
    return 0;
}