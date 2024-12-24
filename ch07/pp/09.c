#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int hour, minute;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c", &hour, &minute, &ch);

    if (toupper(ch) == 'P' && hour != 12)
    {
        hour += 12;
    }
    else if (toupper(ch) == 'A' && hour == 12)
    {
        hour = 0;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);

    return 0;

}