//Accept the string from user and toggled it.

//Input  : vidya TRIMBAKE
//Output : VIDYA trimbake

#include<stdio.h>

void CharToggled(char *str)
{
    while (*str != '\0' )
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
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

    CharToggled(Arr);
    printf("The toggled string is: %s",Arr);

    return 0;
}