#include <stdio.h>

int main (void)
{
    char ch;
    int length = 0, word = 1;
    float avg;

    printf("Enter a sentence: ");

    while((ch = getchar())!= '\n')
    {
        if(ch == ' ')    
            word++;

        else
            length++;
    }

    avg = (float)length / word;
    
    printf("Average word length: %.1f\n", avg);

    return 0;
}

        
        

        
