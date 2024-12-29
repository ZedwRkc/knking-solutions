### Exercise 8.10

Write a declaration for an 8 × 8 char array named chess_board. Include an initializer that puts the following data into the array (one character per array element):
```
r n b q k b n r
 p p p p p p p p
  .   .   .   .
 .   .   .   .  
  .   .   .   .
 .   .   .   .  
P P P P P P P P
 R N B Q K B N R
 ```

 ### Solution

```c
#include <stdio.h>

int main (void)
{
    char chess_board[8][8] =  {{'r', 'r', 'b', 'q', 'k', 'b', 'n', 'r'},
                               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                               {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                               {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                               {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    for(int i = 0; i <  8; i++)
    {
        for (int j = 0; j < 8; j++)
            printf("%c ", chess_board[i][j]);
    
            printf("\n");
    }

    return 0;
}
```
