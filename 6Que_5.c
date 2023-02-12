//Write a program which accept total marks & obtain marks user and calculate percentage

//Input :  1000 745
//Output : 74.5%

#include<stdio.h>

float Percentage(int iMakr1, int iMark2)
{
    float fPer = 1.1;
    fPer = ((iMark2/iMakr1)*100);
    return fPer;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0;

    printf("Please enter total marks:\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks:\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentsge is: %f %",fRet);

    return 0;
}