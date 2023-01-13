#include <stdio.h>

int main()
{
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);

    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        printf("\n  '%c' is alphabet", character);
    }
    else if(character >= '0' && character <= '9')
    {
        printf("\n  '%c' is digit", character);
    }
    else 
    {
        printf("\n  '%c' is special character", character);
    }

    return 0;
}
