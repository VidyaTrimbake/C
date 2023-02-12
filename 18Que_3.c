//Accept number form user and display below pattern on screen.

//Input:  5
//Output: 1   *   2   *   3   *   4   *   5   *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    printf("Requiredt pattern is:\n");
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d\t *\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return 0;
}
