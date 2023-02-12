//Display full name

#include<stdio.h>

int main()
{
    int chArr[30];

    printf("Please enter your full name\n");
    scanf("%s",chArr);  //accept only till the space

    printf("Your name is: %s \n",chArr);

    return 0;
}