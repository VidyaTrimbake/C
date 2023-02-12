//Number perfect or not


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
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

    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    bRet = SumFactors(iValue);
    
    if(bRet == TRUE)
    {
        printf("Number is Perfect");
    }
    else
    {
        printf("Number is not perfect");
    }

    return 0;
}