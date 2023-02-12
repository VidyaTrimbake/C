//cap to small

#include<stdio.h>

void strlwX(char *str)
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

    strlwX(Arr);
    printf("String after conversion is: %s",Arr);
    return 0;
}