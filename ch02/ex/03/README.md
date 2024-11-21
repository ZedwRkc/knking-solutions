### Exercise2.03
Condense the dweight.c program by (1) replacing the assignments to `height`, `length`, and `width` with initializers and (2) removing the `weight` variable, instead calculating (volume + 165) / 166 within the last printf.


### Solution
```c
#include <stdio.h>

int main(void)
{
    int height = 8, 
        length = 12, 
        width = 10, 
        volume = height * length * width 

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pound): %d\n", (volum e + 165) / 166;);

    return 0;
}
```