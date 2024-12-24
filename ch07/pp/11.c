#include <stdio.h>

int main (void)
{

    char ch, first_initial, last_name;

    printf("Enter a first and last name: ");
    scanf("%c", &first_initial);

    while((ch = getchar()) != ' ');

    while((ch = getchar()) == ' ');

    do
    {
        putchar(ch);
    } while ((ch = getchar()) != '\n' && ch != ' ');
    
    printf(", %c.\n", first_initial);
}