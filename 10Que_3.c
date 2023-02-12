//Write a program which accept distance in kilometer and convert it into meter
//(1 KM = 1000 M)

//Input  : 5
//Output : 5000

//Input  : 12
//Output : 12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d",iRet);

    return 0;
}