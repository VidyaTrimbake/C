//QAccept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.
//Input  : Q
//Output : Q    R   S   T   U   V   W   X   Y   Z

//Input  : m
//Output : m l  k   j   i   h   g   f   e   d   c   b   a

//Input  : 8
//Output : 


#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt=ch; iCnt<='Z'; iCnt++,ch++)
        printf("%c\n",iCnt);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt=ch; iCnt>='a'; iCnt--,ch--)
        printf("%c\n",iCnt);        
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}