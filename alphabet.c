#include <stdio.h>
int main() 
{
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
        printf("%c is an alphabet.", input);
    else
        printf("%c is not an alphabet.", input);

    return 0;
}