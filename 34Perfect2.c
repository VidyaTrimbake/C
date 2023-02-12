//check whether no is perfect or not, creating three functions
//Input:  6
//Output: Perfect num

//Input:  28
//Output: Perfect num

//Input:  8
//Output: Not Perfect num

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

bool CheckPerfect(int iData)
{
    int iAns = 0;

    iAns = SumFactors(iData);
    if(iAns == iData)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is Perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }

    return 0;
}