### Exercise 6.10

Show how to replace a `continue` statement by an equivalent `goto` statement.

### Solution

Consider the following while loop:

```c
while (…) 
{
  …
  continue;
  …
}
```

The equivalent code using goto would have the following appearance:

```c
while (…) 
{
  …
  goto loop_end;
  …
  loop_end: ;   /* null statement */
}
```