#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int hour, minute, hour_to_minutes, d_hour, d_minute, a_hour, a_minute;
    char ch;

    printf("Enter a 24-hour time (hours:minutes followed by either A, P, AM, or PM (either lower-case or upper-case): ");
    scanf("%d : %d %c", &hour, &minute, &ch);

   if (toupper(ch) == 'P' && hour != 12)
    {
        hour += 12;
    }
    else if (toupper(ch) == 'A' && hour == 12)
    {
        hour = 0;
    }
    
    hour_to_minutes = (hour * 60) + minute; 
    
    /* Departure time hour to minutes
        480
        583
        679
        767
        840
        945
        1140
        1305   
    */    

    printf("Closest  departure time is ");

    if (hour_to_minutes <=  (480 + 583) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");

    else if(hour_to_minutes <= (583 + 679) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");

    else if(hour_to_minutes <= (679 + 767) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");

    else if(hour_to_minutes <= (767 + 840) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");

    else if(hour_to_minutes <= (840 + 945) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");

    else if(hour_to_minutes <= (945 + 1140) / 2)
        printf("3:45 PM., arriving at 5:55 PM");

    else if(hour_to_minutes <= (1140 + 1305) /2 )
        printf("7:00 p.m., arriving at 9:20 p.m.\n");

    else    
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}