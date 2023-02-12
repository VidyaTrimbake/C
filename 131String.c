#include<stdio.h>

void strToggledrX(char *str)
{
    while (*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
       {
            *str = *str - 32;
       }
        else if((*str >= 'A') && (*str <= 'Z'))
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

    strToggledrX(Arr);
    printf("String after conversion is: %s",Arr);
    return 0;
}