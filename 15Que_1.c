//Accept N numbers from user and return frequency of even numbers.

//Input:  N:    6
// Elemennts: 85  66  3  80  93  88
//Output: 3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvnCnt = 0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iEvnCnt++;
        }
    }
    return iEvnCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
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
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = CountEven(ptr,iLength);
    printf("Frequency of even number is:%d",iRet);

    free(ptr);

    return 0;
}