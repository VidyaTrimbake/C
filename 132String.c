//return white spaces

#include<stdio.h>

int CountWhiteX(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if(*str == ' ')
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
    printf("Please entered string \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteX(Arr);
    printf("Count of white spaces is: %d",iRet);
    return 0;
}