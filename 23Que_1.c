//Accept character from user and check whether it is alphabet or not(A-Z or a-z)

//Input  : F
//Output : True

//Input  : &
//Output : False

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}