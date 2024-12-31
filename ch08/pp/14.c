#include <stdio.h>

#define N 100

int main(void)
{
    char ch, sentence[N], terminating_char;
    int length = 0;

    printf("Enter a sentence: ");

    while (length < N - 1)
    {
        ch = getchar();
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating_char = ch;
            break;
        }
        sentence[length++] = ch;
    }
    sentence[length] = '\0'; 

    printf("Reversal of sentence: ");

    for (int i = length - 1; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            for (int j = i + 1; j < length && sentence[j] != ' '; j++)
            {
                putchar(sentence[j]);
            }
            putchar(' ');
            length = i;
        }
    }

    for (int i = 0; i < length; i++)
    {
        putchar(sentence[i]);
    }

    printf("%c\n", terminating_char);

    return 0;
}