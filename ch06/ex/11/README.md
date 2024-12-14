### Exercise 6.11 

What output does the followinig program fragment produce?

```c
sum = 0;
for (i = 0; i < 10; i++)
{
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```

### Solution

2 + 4 + 6 + 8 = `20`