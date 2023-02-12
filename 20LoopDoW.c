#include<stdio.h>
void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;
    do
    {
        printf("Jay Ganesha!!\n");
        iCnt++;
    } while(iCnt <= iValue);
    
}
int main()
{
    int iNo = 0;
    printf("Enter the num of iteration:");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}