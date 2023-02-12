//write a program which accept string from user and convert it into lower case

//Input  : vidya TRIMBAKE
//Output : vidya trimbake

#include<stdio.h>

void ConvertLower(char *str)
{
    while (*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
            *str = *str + 32;
       }
       str++;
    }
    
}
int main()
{
    char Arr[20];

    printf("Please entered string \n");
    scanf("%[^'\n']s",Arr);

    ConvertLower(Arr);
    printf("String after conversion is: %s",Arr);
    return 0;
}