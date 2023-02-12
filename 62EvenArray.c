#include<stdio.h>  //for printf m scanf
#include<stdlib.h>  //for malloc

//Step 5. Perform the operation of array
int EvenCount(int Arr[], int iSize)  //Server function
{
    //Logic
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}
int main() //client function
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    //Step 1. Accept size of array
    printf("Enter the  number of elements:\n");
    scanf("%d",&iLength);

    //Step 2. Allocate memory for array
    ptr = (int*)malloc(iLength * sizeof(int));

    //Step 3. Accept the elements of array
    printf("enter the elements: \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    //Step 4. Call the function
    iRet = EvenCount(ptr, iLength);
    printf("Number of even elements are : %d\n",iRet);

    //Step 6. Deallocate the memory
    free(ptr);

    return 0;
}