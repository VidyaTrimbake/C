//Accept N numbers from user and return frequency of 11.

//Input : N  : 6
//        No : 66 
//        Elemennts: 85  66  11  80  93  88
//Output: 1

//Input:  N  :  7
//        No :  88  
//        Elemennts: 85  66  11  80  93  88  88
//Output: 2

#include<stdio.h>
#include<stdlib.h>

int FreqCount(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFreqCnt = 0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreqCnt++;
        }
    }
    return iFreqCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iValue = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements :");
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number you want to findout freq of:\n");
    scanf("%d",&iValue);
    
    iRet = FreqCount(ptr,iLength,iValue);
    printf("Frequency of even number is:%d",iRet);

    free(ptr);

    return 0;
}