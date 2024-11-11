#include <stdio.h>

int main(void)
{
    int radius;

    printf("radius: ");
    scanf("%d", &radius);
    
    float volume = (4.0f / 3.0f) * 3.141592 * radius * radius * radius;

    printf("the volume of a sphere with a 10m radius: %f\n", volume);

    return 0;
}