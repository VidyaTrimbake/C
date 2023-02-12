//Check  digit

//Input  : 5
//Output : True

//Input  : d
//Output : False

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9')) 
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

    printf("Please enter any value:\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("%c is a Digit\n",cValue);
    }
    else
    {
        printf("%c is not a Digit\n",cValue);
    }

    return 0;
}