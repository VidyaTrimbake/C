#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}
int main()
{
    int iNo = 0;
    printf("Enter num you want to print:");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}