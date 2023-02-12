#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iEvenCnt = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        return 1;
    }
    if(iNo < 0)
    {
        iNo < 0;
    }
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }
    return iEvenCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of Even of digits is: %d\n",iRet);

    return 0;
}
