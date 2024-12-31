#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int first_word[26] = {0}, second_word[26] = {0};
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            first_word[ch - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            second_word[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (first_word[i] != second_word[i])
        {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");

    return 0;
}