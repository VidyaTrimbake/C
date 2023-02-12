//Accept N numbers from user and return the difference between largest n smallest number.

//Input : N  : 6
//        Elemennts: 85  66  11  80  93  88
//Output: 90 (93-3)

//Input:  N  :  7
//        Elemennts: 85  66  101  81  93  88  88
//Output: 35  (101 - 66)

#include<stdio.h>
#include<stdlib.h>

int LargeNum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt]<iMax)
        {
            iMin = Arr[iCnt];
        }
        
    }
    return (iMax - iMin);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
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
    
    iRet = LargeNum(ptr,iLength);
    printf("Largest number is:%d",iRet);

    free(ptr);

    return 0;
}