//Convert small to capital
#include<stdio.h>

char ToUpper(char ch)
{
    return ch - 32;
}
int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = ToUpper(cValue);

    printf("Character in the upper case is: %c\n",cRet);

    return 0;
}