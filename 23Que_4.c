
//Accept character from user and check whether it is small letter or not(a-z)

//Input  : f
//Output : True

//Input  : G
//Output : False

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is small Character");
    }
    else
    {
        printf("It is not a small character");
    }

    return 0;
}