//Write a program which accept one number from user and check whether that number is greater than 100 or not

//Input : 101
//Output : Greater

//Input : 39
//Output : Smaller

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Please enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Greater than 100",iValue);
    }
    else
    {
        printf("%d is Smaller than 100",iValue);
    }
    return 0;
}