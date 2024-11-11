### Exercise 2.04

Write a program that declares several int and float variables--without initializing them--and then prints their values. Is there any pattern to the values? (Usually there isn't.)

### Solution

```c
#include <stdio.h>

int main(void) 
{
    int a, b, c, d;
    float f, g, h, i;
    
    printf("%d\n%d\n%d\n%d\n%f\n%f\n%f\n%f\n", a, b, c, d, f, g, h, i);

    return 0;
}
```

There is no pattern to the values. Above program contain "garbage values." These values are unpredictable and depend on the residual contents of memory where the variables are stored, so no specific pattern should be expected