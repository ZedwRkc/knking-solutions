### Exercse 5.05

Is the following if statement legal?

```c
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to 0?

### Solution
The statement is legal.  

`if ((n >= 1) <= 10)`   
Since n is 0, n >= 1 returns 0.

```c
if(0 <= 10) // (0 <= 10) return 1
    printf("n is between 1 and 10\n");  //  this statement will be run
```


