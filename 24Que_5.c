//Accept character from user and display its ASCII value in decimal, octal, hexadecimal format.


//Input  : A
//Output : Decimal  65
//         Octal    0101
//         Hexa     0X41          



#include<stdio.h>

void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("Decimal: %d\n",ch);
        printf("Octal: %o\n",ch);
        printf("Hexadecimal: %x\n",ch);
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