//Accept N numbers from user and accept Range , Display all elements from that range
//Input:  N:        6
//        Start:    30  
//        End:      50
//        Elements: 85 66 3 76 93 88
//        Output:   0

//Input:  N:        6
//        Start:    60
//        End:      90
//        Elements: 85 66 3 76 93 88
//        Output:   66 76 88


#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    printf("Numbers in between the range %d and %d :",iStart,iEnd);
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]>iStart) && (Arr[iCnt]<iEnd))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements :");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point:\n");
    scanf("%d",&iValue2);

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);

    return 0;
}