//Write a program which accept string from user and return difference between freq of small and capital characters.

//Input  : "MarvellouS"
//Output :  6 (8-2)

#include<stdio.h>
#include<stdbool.h>

int CountSmall(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {            
            iSmallCnt++;
        }
        else
        {            
            iCapCnt++;
        }
        str++;
    }
    return(iSmallCnt - iCapCnt);
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("%d",iRet);
    return 0;
}