//Accept number from user, if number is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else 
    {
        printf("Demo");
    }
}

int main()
{
    int iVAlue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iVAlue);

    Display(iVAlue);
}