### Exercise 5.08

The following if statement is unnecessarily coomplicated. Simplify it as much as possible.
(Hint : The entire statement c an be replaced by a single assignment.)

```c
if (age >= 13)
    if(age <= 19)
        teenager = true;
    else
        teenager = false;
else if (age < 13)
    teenager = false;
```

### Solution

```c
teenager = ( (13 <= age) && (age <= 19) ) ? true : false;
```