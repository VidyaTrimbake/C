//Accept character from user and check whether it is alphabet or not(A-Z or a-z)

//Input  : F
//Output : True

//Input  : d
//Output : False

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital character");
    }

    return 0;
}