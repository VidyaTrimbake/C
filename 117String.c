//Calculate character of string

#include<stdio.h>

int strLenX(char str[])
{
    int iCnt = 0, i = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        iCnt++;
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