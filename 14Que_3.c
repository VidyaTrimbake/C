//Accept N numbers from user and display all such elements which are even and divisible by 5

//Input  : N  : 6
        //Elements: 85  66  3  80  93  88
//Output :  80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Numbers which are even and divisible by 5 are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]%2==0) && (Arr[iCnt]%5==0))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }    
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

    Display(ptr,iLength);

    free(ptr);

    return 0;
}