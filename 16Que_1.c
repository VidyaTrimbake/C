//Accept N numbers from user and check whether that numbers contains 11 in it or not.

//Input:  N:    6
//No : 66
// Elemennts: 85  66  3   93  88  
//Output: TRUE

//Input:  N:    6
//No : 66
// Elemennts: 85  11  3  15  11  111
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Occurence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iPresent = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPresent++;
        }
    }
    if(iPresent != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0,iValue = 0;
    int iCnt = 0;
    bool bRet = false;

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

    printf("Enter the element you want to findout:\n");
    scanf("%d",&iValue);

    bRet = Occurence(ptr,iLength,iValue);
    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    free(ptr);

    return 0;
}