//Write a progrsm ehich accept two numbers and check whether numbers are equal or not.

//Input : 10 11
//Output : Equal

//Input : 10 12
//Output : Not Equal

//Input : 10 -10
//Output : Not Equal

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter 1st number:\n");
    scanf("%d",&iValue1);

    printf("Please enter 2nd number:\n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2); 
    if(bRet == TRUE)
    {
        printf("%d and %d are equal",iValue1, iValue2);
    }
    else
    {
        printf("%d and %d are not equal",iValue1, iValue2);
    }

    return 0;
}