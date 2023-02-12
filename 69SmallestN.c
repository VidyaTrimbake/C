#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt2 = 0;
    int iMin = Arr[0];

    for(iCnt2 = 0; iCnt2<iSize; iCnt2++)
    {
        if(Arr[iCnt2]<iMin)
        {
            iMin = Arr[iCnt2];
        }
    }
    return iMin;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt1 = 0, iRet = 0;

    printf("Enter the number of element:\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter the elements:\n");
    for(iCnt1=0; iCnt1<iLength; iCnt1++)
    {
        scanf("%d",&ptr[iCnt1]);
    }

    iRet = Minimum(ptr, iLength);

    printf("Minimum number is:%d",iRet);

    free(ptr);

    return 0;
}