//Accept any character from user and check whether that character is vowel(a,e,i,o,u) or not.
//Input : E  Output : TRUE
//Input : E  Output : TRUE

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef char BOOL;

BOOL ChkVoWel(char cCh)
{
    if((cCh=="a") ||  (cCh=="e") || (cCh=="i") || (cCh=="o") || (cCh=="u"))
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
    BOOL bRet = FALSE;

    printf("enter any character: \n");
    scanf("%c",&cValue);

    bRet = ChkVoWel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("it is not vowel");
    }

}