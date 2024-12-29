### Exercise 8.09

Using the array of Exercise 8, write a program fragment that computes the average temperature for a month (averaged over all days of the month and all hours of the day).

### Solution

```c
#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main (void)
{
    float total, temperature_readings[30][24];

    for(int i = 0; i < 30; i++)
        for(int j = 0; j < 24; j++)
            total += temperature_readings[i][j];  

    float avg = total / (DAYS * HOURS);

    return 0;
}
```