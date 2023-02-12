//Accept N numbers from user and check whether that numbers contains 11 in it or not.

//Input:  N:    6
// Elemennts: 85  66  11  80  93  88  90
//Output: 11 is present.

//Input:  N:    6
// Elemennts: 85  66  3  80  93  88  90
//Output: 11 is not present.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Occurence(int Arr[], int iLength)
{
    int iCnt = 0;
    int iPresent = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iLength = 0, i = 0;
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
    for(i=0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    bRet = Occurence(ptr,iLength);
    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(ptr);

    return 0;
}