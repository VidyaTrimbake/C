//Sum of non factors of  given value

//Input:  6
//Output: 9   (4+5)

//Input:  15
//Output: 96  (2+4+6+7+8+9+10+11+12+13+14)

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iAns = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iAns = SumNonFactors(iValue);
    printf("Sum of non factors of %d is :%d",iValue,iAns);

    return 0;
}