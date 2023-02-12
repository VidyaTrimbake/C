//Accept character from user and check whether it contains vowels or not(a e i o u)

//Input  : marvellous
//Output : TRUE

//Input  : xyz
//Output : FALSE


#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
    if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
    {
        return true;
    }
    else
    {
        return false;
    }
    str++;
}
int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowels(Arr);

    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}