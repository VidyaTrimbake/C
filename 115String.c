//Calculate character of string

#include<stdio.h>

int strLenX(char *str) //(char Arr[20])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
    
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter  string\n");

    //scanf("%s",chArr);
    scanf("%[^'\n']s",Arr); //strLen(100) 
    //name of array is internally considered as base address, so no need to use & operator

    iRet = strLenX(Arr);

    printf("Number of characters are: %d\n",iRet);

    return 0;
}