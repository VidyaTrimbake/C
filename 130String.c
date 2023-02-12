#include<stdio.h>

void strUprX(char *str)
{
    while (*str != '\0')
    {
       if((*str >= 'a') && (*str <= 'z'))
       {
            *str = *str - 32;
       }
       str++;
    }
    
}
int main()
{
    char Arr[20];

    printf("Please entered string \n");
    scanf("%[^'\n']s",Arr);

    strUprX(Arr);
    printf("String after conversion is: %s",Arr);
    return 0;
}