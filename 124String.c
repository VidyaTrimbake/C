#include<stdio.h>
#include<stdbool.h>

bool ChekChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {            
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChekChar(Arr,cValue);

    if(bRet == true)
    {
        printf("Character is present in the string\n");
    }
    else
    {
        printf("Character is not present in the string\n");
    }


    return 0;
}