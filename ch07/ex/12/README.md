### Exercise 7.12

Suppose that `i` is a variable of type int, `f` is a variable of type float, and `d` is a variable of type double. Explain what conversions take place during the execution of the following

statement: 
```c
 d = i + f;
```

### Solution

The value of i is converted to float and added to f, then the result is converted to double and stored in d.