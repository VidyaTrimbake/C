//Display the non factors of given no
//Input:  6
//Output: 4 5

#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    printf("Non Factors of %d are: \n");

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iAns = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}