//Write a prgram which accpet range from user and display all numbers in between that range

//Input  : 23  35
//Output : 24 26 28 . . 34

//Input  : 10 18
//Output : 10 12 14 16 18

//Input  : -10 2
//Output : -10 -8 -6 . . . 2

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

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }
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