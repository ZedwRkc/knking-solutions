#include <stdio.h>

int main (void)
{
    int m, d, y, em, ed, ey;

    printf("Enter a  date (mm/dd/yy): ");
    scanf("%d / %d / %d", &m, &d, &y);
    
    em = m;
    ed = d;
    ey = y;

    while (m != 0 && d != 0 && y != 0)
    {
        if (ey > y)
        {
            em = m;
            ed = d;
            ey = y;
        }

        else if (y == ey)
        {
            if (em > m)
            {
                em = m;
                ed = d;
                ey = y;
            }

            else if (m == em)
            {
                if (ed > d)
                {
                    em = m;
                    ed = d;
                    ey = y;
                }
            }
        }
        
        printf("Enter a  date (mm/dd/yy): ");
        scanf("%d / %d / %d", &m, &d, &y);      
    }

    printf("%d/%.2d/%.2d is the earliest date\n", em, ed, ey);

    return 0;
}
