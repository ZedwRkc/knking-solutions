### Exercise 6.13

Find the error in the following program fragment and fix it.

```c
if (n % 2 == 0);
    printf("n is even \n");
```

### Solution
In the above program, `if` statement ends with semicolon. 
It should be modified as follows:
```c
if(n % 2 == 0)
    printf("n is even \n");
```

