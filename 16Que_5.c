
//Accept N numer from user and return product of all odd elements

//Input:  N  :  6
//        Elemennts: 15  66  3  70  10  88
//Output: 45

//Input:  N  :  6
//        Elemennts: 44  66  72  70  10  88
//Output: 0

#include<stdio.h>  //for printf m scanf
#include<stdlib.h>  //for malloc

int EvenCount(int Arr[], int iSize)  //Server function
{
    int iCnt = 0;
    int iOddMult = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
           iOddMult = iOddMult * Arr[iCnt];
        }
    }
    return iOddMult;
}
int main() //client function
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter the  number of elements:\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength * sizeof(int));

    printf("enter the elements: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = EvenCount(ptr, iLength);
    printf("Number of even elements are : %d\n",iRet);

    free(ptr);

    return 0;
}