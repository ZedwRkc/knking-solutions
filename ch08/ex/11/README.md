### Exercise 8.11

Write a program fragment that declares an 8 × 8 char array named checker_board and then uses a loop to store the following data into the array (one character per array element):

```
 B R B R B R B R
 R B R B R B R B
 B R B R B R B R
 R B R B R B R B
 B R B R B R B R
 R B R B R B R B
 B R B R B R B R
 R B R B R B R B
 ```

Hint: The element in row `i`, column `j`, should be the letter B if `i` + `j` is an even number

### Solution

```c
#include <stdio.h>

int main (void)
{
    char checker_board[8][8];

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {   
            checker_board[i][j] = ((i + j) % 2 == 0 ? 'B' : 'R');

            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

    