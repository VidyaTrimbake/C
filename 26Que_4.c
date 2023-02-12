//Accept a string from user and display only digits from the string.

//Input  : Marve89llous121
//Output : 89121

#include<stdio.h>

void DisplayDigits(char *str)
{
    char *temp;

    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        *str++;
    }    
}

int main()
{
    char Arr[20];

    printf("Please enter the string:\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}