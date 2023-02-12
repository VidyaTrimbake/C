//Accept the no and display odd factors

//Input: 16
//Output: 1

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    printf("Even Factors\n");

    for(iCnt=1; iCnt<=(iNo/2); iCnt=iCnt+2)  //(iCnt += 2)
    {
        if((iNo % iCnt) == 0) 
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}