//Write a program which accept string from user and count number of capital characters.

//Input  : "Marvellous"
//Output :  1

#include<stdio.h>
#include<stdbool.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {            
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("%d",iRet);
    return 0;
}