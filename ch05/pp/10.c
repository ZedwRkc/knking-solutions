#include <stdio.h>

int main(void)
{
    int grade_num;

    printf("Enter numerical grade: ");
    scanf("%d", & grade_num);

    switch(grade_num / 10)
    {
        case 10: case 9:
            printf("Letter grade: A\n");
            break;

        case 8:
            printf("Letter grade: B\n");
            break;

        case 7:
            printf("Letter grade: C\n");
            break;

        case 6:
            printf("Letter grade: D\n");
            break;

        default:
            printf("Letter grade: F\n");
    }

    return 0;
}

