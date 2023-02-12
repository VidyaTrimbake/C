#include<stdio.h>
void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("Jay Ganesha!!\n");
        iCnt++;
    }
}
int main()
{
    int iNo = 0;
    printf("Enter no of iteration:");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;

}