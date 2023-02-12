//display Factors and add
//optimize time complexity
//O(N/2)

#include<stdio.h>
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iAns = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    iAns = SumFactors(iValue);
    printf("Sum of factors of %d is: %d\n",iValue,iAns);

    return 0;
}