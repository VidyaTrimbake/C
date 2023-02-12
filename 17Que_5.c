//***Uncompleted***

//Accept N numbers from user and display summation of each digits of each number.

//Input : N  : 6
//        Elemennts: 8225  665  3  76  953  858
//Output: 17 17 3 13 17  21

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
  //Logic
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
    
    DigitsSum(ptr,iLength);

    free(ptr);

    return 0;
}