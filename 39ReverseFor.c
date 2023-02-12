//Reverse using for loop
//Input: 5
//Output: 5 4 3 2 1


#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("------------------------");
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("------------------------");
}
int main()
{
    int iValue = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}