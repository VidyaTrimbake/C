//Reverse the num

//Input: 5
//Output: 5 4 3 2 1

#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("------------------------\n");
    iCnt=iNo; 
    while(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    printf("\n------------------------\n");

}
int main()
{
    int iValue = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}