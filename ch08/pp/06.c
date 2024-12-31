#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch, message[100];
    int i = 0;

    printf("Enter a message: ");
    
    while ((ch = getchar()) != '\n' && i < 100)
        message[i++] = ch;
    message[i] = '\0'; // 메시지의 끝에 널 문자 추가
    
    printf("In B1FF-speak: ");
    for (int j = 0; j < i; j++)
    {
        switch (toupper(message[j]))
        {
            case 'A': message[j] = '4'; break;
            case 'B': message[j] = '8'; break;
            case 'E': message[j] = '3'; break;
            case 'I': message[j] = '1'; break;
            case 'O': message[j] = '0'; break;
            case 'S': message[j] = '5'; break;
            default: message[j] = toupper(message[j]); break;
        }
        printf("%c", message[j]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}