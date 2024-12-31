#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int scrabble[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;
    int score = 0;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = toupper(ch);
            score += scrabble[ch - 'A'];
        }
    }

    printf("Scrabble value: %d\n", score);

    return 0;
}