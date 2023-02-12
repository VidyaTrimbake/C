//Write a program which accept number from user and count freaquency of 2 in it.

//Input :  2395
//Output : 1

//Input :  1018
//Output : 0

//Input :  9000
//Output : 0

//Input :  922432
//Output : 3

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iFreqCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 2)
        {
            iFreqCnt++;
        }
    }
    return iFreqCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}