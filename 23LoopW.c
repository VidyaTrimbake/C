#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    
    iCnt = 1;
    while( iCnt <= iValue)
    {
        printf("Marvellous : %d\n",iCnt);
        iCnt++;
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