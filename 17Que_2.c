//Accept N numbers from user and return the smallest number.

//Input : N  : 6
//        Elemennts: 85  66  11  80  93  88
//Output: 11

//Input:  N  :  7
//        Elemennts: 85  66  101  81  93  88  88
//Output: 66

#include<stdio.h>
#include<stdlib.h>

int SmallNum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
    
    iRet = SmallNum(ptr,iLength);
    printf("Smallest number is:%d",iRet);

    free(ptr);

    return 0;
}