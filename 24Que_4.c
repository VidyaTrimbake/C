//Accept character from user and check whether it is special symbol or not(! @ # $ % ^ & *)

//Input  : %
//Output : TRUE

//Input  : d
//Output : FALSE


#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = Display(cValue);

    if(bRet==true)
    {
        printf("%c is special sysmbol",cValue);
    }
    else
    {
        printf("%c is not special sysmbol",cValue);
    }

    return 0;
}