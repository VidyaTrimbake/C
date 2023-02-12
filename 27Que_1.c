//Accept a string from user and accept a character and check whether that character is present in string or not.

//Input  : "Marvellous Multi OS"  
//          e
//Output : TRUE

//Input  : ""Marvellous Multi OS" 
//          W
//Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        else
        {
            return false;
        }
        *str++;
    }    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;
}