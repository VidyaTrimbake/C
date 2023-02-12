//Accept N numbers from user and return the difference between frequency of even numbers and odd numbers

//Input:  N:    7
// Elemennts: 85  66  3  80  93  88  90
//Output: 1  (4 - 3)

#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvnCnt = 0;
    int iOddCnt = 0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iEvnCnt++;
        }
        else 
        {
            iOddCnt++;
        }
    }
    return (iEvnCnt - iOddCnt);
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

    iRet = Count(ptr,iLength);
    printf("Difference of Frequency of even and odd number is:%d",iRet);

    free(ptr);

    return 0;
}