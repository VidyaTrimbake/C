//check whether no is perfect or not, creating only two functions
//Input:  6
//Output: Perfect num

//Input:  28
//Output: Perfect num

//Input:  8
//Output: Not Perfect num

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
    return iSum;
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