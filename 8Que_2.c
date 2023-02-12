//Accept single number from user and print it into word.

//Input  : 9
//Output : Nine

//Input  : -3
//Output : Three

//Input  : 12
//Output : Invalid Number

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo < 10)
    {
        if(iNo == 1)
            printf("One");
        if(iNo == 2)
            printf("Two");
        else if(iNo == 3)
            printf("Three");    
        else if(iNo == 4)
            printf("Four");
        else if(iNo == 5)
            printf("Five");
        else if(iNo == 6)
            printf("Six");
        else if(iNo == 7)
            printf("Seven");
        else if(iNo == 8)
            printf("Eight");
        else if(iNo == 9)
            printf("Nine");
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}