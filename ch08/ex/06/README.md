### Exercise 8.06

Calculators, watches, and other electronic devices often rely on seven-segment displays for numerical output. To form a digit, such devices “turn on” some of the seven segments while leaving others “off”:
```
 _        _    _         _    _    _    _    _ 
| |   |   _|   _|  |_|  |_   |_     |  |_|  |_|
|_|   |  |_    _|    |   _|  |_|    |  |_|   _|
```
 Suppose that we want to set up an array that remembers which segments
```
  _0_
5|   |1
  _6_
4|   |2
  _3_
  
```

Here’s what the array might look like, with each row representing one digit:
```c
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
```
 I’ve given you the first row of the initializer; fill in the rest.

### Solution

```c
const int segments [10][7] = {{1, 1, 1, 1, 1, 1, 0},
                              {1, 1, 0, 0, 0, 0, 0},
                              {1, 1, 0, 1, 1, 0, 1},
                              {1, 1, 1, 1, 0, 0, 1},
                              {0, 1, 1, 0, 0, 1, 1},
                              {1, 0, 1, 1, 0, 1, 1},
                              {1, 0, 1, 1, 1, 1, 1},
                              {1, 1, 1, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1},
                              {1, 1, 1, 1, 0, 1, 1}};
                              ```
                    