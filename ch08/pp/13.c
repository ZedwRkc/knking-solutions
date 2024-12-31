#include <stdio.h>

int main (void)
{

    char ch, first_initial, last_name[21];
    int i = 0;

    printf("Enter a first and last name: ");
    scanf("%c", &first_initial);

    while((ch = getchar()) != ' ');

    while((ch = getchar()) == ' ');

    do
    {
       last_name[i++] = ch;
    } while ((ch = getchar()) != '\n' && ch != ' ');
    
    printf("You entered the name: ");
    for (int j = 0; j < i; j++)
    {
        printf("%c", last_name[j]);
    }

    printf(", %c.\n", first_initial);
}