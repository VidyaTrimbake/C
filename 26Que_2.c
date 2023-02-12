//Accept a string from user and convert it into upper case.

//Input  : vidya TRIMBAKE
//Output : Vidya TRIMBAKE

#include<stdio.h>

void ConvertUpper(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        *str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Please enter the string:\n");
    scanf("%[^'\n']s",Arr);

    ConvertUpper(Arr);
    printf("The required string is: %s",Arr);
    
    return 0;
}