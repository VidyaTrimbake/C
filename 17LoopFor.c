#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesha!!\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the num of iteration: \n");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}