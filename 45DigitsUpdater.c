//Accept number from user n count digits (//this code work for both negative n positive number)

//Input: 761
//Output : 3

//Input: 75
//Output : 2

//Input: -75
//Output : 2

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)    //(updater)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter any number:\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}