#include <stdio.h>
#include <stdlib.h>

#define NUM_DEPARTURES ((int)(sizeof(departure_times) / sizeof(departure_times[0])))

int main(void)
{
    int hour, minute, hour_to_minutes;
    int departure_times[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival_times[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int closest_departure_index = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    hour_to_minutes = (hour * 60) + minute;

    int min_difference = abs(hour_to_minutes - departure_times[0]);
    
    for (int i = 1; i < NUM_DEPARTURES; i++)
    {
        int difference = abs(hour_to_minutes - departure_times[i]);
        if (difference < min_difference)
        {
            min_difference = difference;
            closest_departure_index = i;
        }
    }

    printf("Closest departure time is ");
    int d_hour = departure_times[closest_departure_index] / 60;
    int d_minute = departure_times[closest_departure_index] % 60;
    int a_hour = arrival_times[closest_departure_index] / 60;
    int a_minute = arrival_times[closest_departure_index] % 60;

    if (d_hour < 12)
        printf("%d:%02d a.m., arriving at %d:%02d a.m.\n", d_hour, d_minute, a_hour, a_minute);
    else if (d_hour == 12)
        printf("%d:%02d p.m., arriving at %d:%02d p.m.\n", d_hour, d_minute, a_hour, a_minute);
    else
        printf("%d:%02d p.m., arriving at %d:%02d p.m.\n", d_hour - 12, d_minute, a_hour - 12, a_minute);

    return 0;
}