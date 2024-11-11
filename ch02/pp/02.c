#include <stdio.h>

int main(void)
{
    int radius = 10;
    float volume = (4.0f / 3.0f) * 3.141592 * radius * radius * radius;

    printf("the volume of a sphere with a 10m radius: %f\n", volume);

    return 0;
}