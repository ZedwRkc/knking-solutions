### Exercise 6.08

What output does the following `for` statement produce?

```c
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

### Solution
`10 5 3 2 1 1 1 1 1 .....`

1 is assgined to `i` and check the condition `i >= 1`, is true, then print the `i` value as 1 and `i` is divided by 2, that is `i = 1`.
