//Accept N numbers from user and return difference between summation of even elements and summation of odd elements

//Input  : N  : 6
        //Elements: 85  66  3  80  93  88
//Output : 53  (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int EvenOddDiff(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0, iOddSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return (iEvenSum - iOddSum);
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    printf("Enter the elements :");
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = EvenOddDiff(ptr,iLength);
    printf("Difference between sum of even and odd number is: %d",iRet);

    free(ptr);

    return 0;

}