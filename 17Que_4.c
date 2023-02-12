//***Uncompleted***

//Accept N numbers from user and display such numbers which contains 3 digits in it.

//Input : N  : 6
//        Elemennts: 8225  665  3  76  953  858
//Output: 665 953 858

//Input:  N  :  7
//        Elemennts: 85  666  101  81  93  898  88
//Output: 666 101 898

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    //logic
}

int main()
{
    int *ptr = NULL;
    int iLength = 0; 
    int iCnt = 0;

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
    
    Digits(ptr,iLength);

    free(ptr);

    return 0;
}