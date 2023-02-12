//Display full name

#include<stdio.h>

int main()
{
    int chArr[30];

    printf("Please enter your full name\n");

    //scanf("%s",chArr);
    scanf("%[^'\n']s",chArr); //name of array is internally considered as base address, so no need to use & operator

    printf("Your name is: %s \n",chArr);

    return 0;
}