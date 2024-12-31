#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    char grid[SIZE][SIZE];
    int i, j, x, y, direction, steps = 0;
    char letter = 'A';

    // 배열 초기화
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            grid[i][j] = '.';

    // 시작 위치
    x = 0;
    y = 0;
    grid[x][y] = letter++;

    srand(time(NULL));

    while (letter <= 'Z')
    {
        direction = rand() % 4;
        int new_x = x, new_y = y;

        switch (direction)
        {
        case 0:
            new_x = x - 1;
            break; // 위로 이동
        case 1:
            new_x = x + 1;
            break; // 아래로 이동
        case 2:
            new_y = y - 1;
            break; // 왼쪽으로 이동
        case 3:
            new_y = y + 1;
            break; // 오른쪽으로 이동
        }

        // 이동이 유효한지 확인
        if (new_x >= 0 && new_x < SIZE && new_y >= 0 && new_y < SIZE && grid[new_x][new_y] == '.')
        {
            x = new_x;
            y = new_y;
            grid[x][y] = letter++;
            steps = 0;
        }
        else
        {
            steps++;
            if (steps == 4) // 모든 방향이 막힌 경우
                break;
        }
    }

    // 결과 출력
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            printf("%c ", grid[i][j]);
        printf("\n");
    }

    return 0;
}