//Accept the string and return the number of white spaces.

//Input  : vidya trimbake
//Output : 1

#include<stdio.h>

int CntSpaces(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter the string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CntSpaces(Arr);
    printf("The frequency of spaces int given string is: %d",iRet);

    return 0;
}