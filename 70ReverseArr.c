#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)
{
    int iCnt2 = 0;
    printf("Elements in the reverse order:\n");
    for(iCnt2 = iSize-1;iCnt2 >= 0;iCnt2--)
    {
        printf("%d\t",Arr[iCnt2]);
    }
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt1 = 0;

    printf("Enter the number of element:\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter the elements:\n");
    for(iCnt1=0; iCnt1<iLength; iCnt1++)
    {
        scanf("%d",&ptr[iCnt1]);
    }

    DisplayReverse(ptr, iLength);

    free(ptr);

    return 0;
}