### Exercise 6.13

Find the error in the following program fragment and fix it.

```c
if (n % 2 == 0);
    printf("n is even \n");
```

### Solution
The problem is the semicolon at the end of the first line. If we remove it, the statement is now correct:

```c
if (n % 2 == 0)
  printf("n is even\n");
```
