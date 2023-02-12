//Write a program which display ASCII table. Table contains symbol, Decimal, Hexadecimal and octal representation of every member from 0 too 255.

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    printf("Character  Decimal  Hexadecimal  Octal\n");
    for(i=0; i<=255; i++)
    {
        printf("%c\t\t%d\t\t %x\t\t %o\n",i,i,i,i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}