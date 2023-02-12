//Write a prgram which accpet range from user and display all numbers in between that range

//Input  : 23  35
//Output : 35 34 32 . . 24 23

//Input  : 10 18
//Output : 18 17 16 . . 11 10

//Input  : -10 2
//Output :  2

//Input  : 10 10
//Output : 10

//Input  : 90 18
//Output : Invalid Range

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }    

    printf("Numbers between range %d and %d are:\n",iStart,iEnd);
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\n",iCnt);
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter the starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}