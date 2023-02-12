//Accept one character from user and convert cace of that character 
//Input : a  Output : A
//Input : D  Output : d

#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue>=97 && cValue<=122)
    {
        cValue = cValue - 32; 
        printf("%c",cValue);
    }
    else if(cValue>=65 && cValue<=90)
    {
        printf("%c",cValue);
    }
}
int main()
{
    char cValue = '\0';
    printf("enter any character: \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}